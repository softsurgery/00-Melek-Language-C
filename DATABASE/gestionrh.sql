-- phpMyAdmin SQL Dump
-- version 4.1.4
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Apr 13, 2024 at 12:42 PM
-- Server version: 5.6.15-log
-- PHP Version: 5.5.8

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `gestionrh`
--

-- --------------------------------------------------------

--
-- Table structure for table `affectation`
--

CREATE TABLE IF NOT EXISTS `affectation` (
  `ID_Affectation` int(11) NOT NULL AUTO_INCREMENT,
  `ID_Employe` int(11) NOT NULL,
  `ID_Projet` int(11) NOT NULL,
  PRIMARY KEY (`ID_Affectation`),
  KEY `ID_Employe` (`ID_Employe`,`ID_Projet`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Table structure for table `departements`
--

CREATE TABLE IF NOT EXISTS `departements` (
  `ID_Departement` int(11) NOT NULL AUTO_INCREMENT,
  `Nom_Dep` varchar(50) NOT NULL,
  `Date_Creation` date NOT NULL,
  `Budget` float NOT NULL,
  `Responsable_Departement` int(11) NOT NULL,
  `Description` varchar(255) NOT NULL,
  PRIMARY KEY (`ID_Departement`),
  KEY `Responsable_Departement` (`Responsable_Departement`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=4 ;

--
-- Dumping data for table `departements`
--

INSERT INTO `departements` (`ID_Departement`, `Nom_Dep`, `Date_Creation`, `Budget`, `Responsable_Departement`, `Description`) VALUES
(1, 'Ressources Humaines', '2023-01-01', 50000, 1, 'Département\r\nchargé de la\r\ngestion du\r\npersonnel'),
(2, 'Développement', '2023-01-15', 100000, 4, 'Département\r\nchargé du\r\ndéveloppement de\r\nproduits'),
(3, 'Marketing', '2023-01-02', 750000, 2, 'Département\r\nchargé de la\r\npromotion et de la\r\npublicité');

-- --------------------------------------------------------

--
-- Table structure for table `employes`
--

CREATE TABLE IF NOT EXISTS `employes` (
  `Identificateur` int(11) NOT NULL AUTO_INCREMENT,
  `Nom` varchar(25) NOT NULL,
  `Prenom` varchar(25) NOT NULL,
  `Adresse` varchar(50) DEFAULT NULL,
  `Ville` varchar(30) NOT NULL,
  `DateNaissance` date NOT NULL,
  `Nbre Enfants` smallint(6) NOT NULL,
  PRIMARY KEY (`Identificateur`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=5 ;

--
-- Dumping data for table `employes`
--

INSERT INTO `employes` (`Identificateur`, `Nom`, `Prenom`, `Adresse`, `Ville`, `DateNaissance`, `Nbre Enfants`) VALUES
(1, 'Bnesalah', 'Ali', '45, rue de sousse', 'Sousse', '1987-11-03', 3),
(2, 'Saidi', 'Mohamed', NULL, 'Sfax', '1980-02-02', 0),
(3, 'Benali', 'Salma', '01,rue de mahdia', 'Mahdia', '1988-07-14', 1),
(4, 'Firidi', 'Rachid', '99, rue de monastir', 'Monastir', '1983-12-24', 6);

-- --------------------------------------------------------

--
-- Table structure for table `projets`
--

CREATE TABLE IF NOT EXISTS `projets` (
  `ID_Projet` int(11) NOT NULL AUTO_INCREMENT,
  `Nom_Projet` varchar(255) NOT NULL,
  `Date_Debut` date NOT NULL,
  `Date_Fin` date NOT NULL,
  `Budget` int(12) NOT NULL,
  `ID_Departement` int(11) NOT NULL,
  `Description` varchar(255) NOT NULL,
  PRIMARY KEY (`ID_Projet`),
  KEY `ID_Departement` (`ID_Departement`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=4 ;

--
-- Dumping data for table `projets`
--

INSERT INTO `projets` (`ID_Projet`, `Nom_Projet`, `Date_Debut`, `Date_Fin`, `Budget`, `ID_Departement`, `Description`) VALUES
(1, 'Projet A', '2023-03-01', '2023-06-30', 50000, 1, 'Développement d''un nouveau système de gestion des ressources humaines.'),
(2, 'Projet B', '2023-04-15', '2023-03-30', 75000, 2, 'Conception et lancement d''une nouvelle campagne marketing.'),
(3, 'Projet C', '2023-02-01', '2023-05-31', 100000, 3, 'Développement d''un nouveau produit pour le département de développement.');

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
