-- phpMyAdmin SQL Dump
-- version 4.1.4
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Apr 13, 2024 at 12:43 PM
-- Server version: 5.6.15-log
-- PHP Version: 5.5.8

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `personne`
--

-- --------------------------------------------------------

--
-- Table structure for table `cours`
--

CREATE TABLE IF NOT EXISTS `cours` (
  `id_cours` int(11) NOT NULL AUTO_INCREMENT,
  `nom_cours` varchar(20) NOT NULL,
  `description` varchar(255) NOT NULL,
  `date_debut` date NOT NULL,
  `date_fin` date NOT NULL,
  PRIMARY KEY (`id_cours`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=4 ;

--
-- Dumping data for table `cours`
--

INSERT INTO `cours` (`id_cours`, `nom_cours`, `description`, `date_debut`, `date_fin`) VALUES
(1, 'Mathématiques', 'Cours de mathématiques\r\navancées', '2024-03-01', '2024-06-30'),
(2, 'Français', 'Cours de littérature française', '2024-03-15', '2024-07-15'),
(3, 'Physique', 'Cours de physique moderne', '2024-03-10', '2024-06-20');

-- --------------------------------------------------------

--
-- Table structure for table `etudiant`
--

CREATE TABLE IF NOT EXISTS `etudiant` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `nom` varchar(50) NOT NULL,
  `date_naissance` date NOT NULL,
  `prenom` varchar(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=4 ;

--
-- Dumping data for table `etudiant`
--

INSERT INTO `etudiant` (`id`, `nom`, `date_naissance`, `prenom`) VALUES
(1, 'Dupont', '2000-12-01', 'Jean'),
(2, 'Martin', '1999-05-20', 'Marie'),
(3, 'Durand', '2001-08-10', 'Pierre');

-- --------------------------------------------------------

--
-- Table structure for table `inscription`
--

CREATE TABLE IF NOT EXISTS `inscription` (
  `id_etudiant` int(11) NOT NULL,
  `id_cours` int(11) NOT NULL,
  `id_inscription` int(11) NOT NULL AUTO_INCREMENT,
  PRIMARY KEY (`id_inscription`),
  KEY `id_etudiant` (`id_etudiant`,`id_cours`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
