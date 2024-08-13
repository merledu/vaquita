// See README.md for license details.
scalaVersion     := "2.12.13"
version          := "0.1.0"
organization     := "com.github.merledu"
name := "vaquita"
libraryDependencies ++= Seq(
  "edu.berkeley.cs" %% "chisel3" % "3.5.6",
  "edu.berkeley.cs" %% "chiseltest" % "0.3.2" % "test"
)
scalacOptions ++= Seq(
  "-Xsource:2.11",
  "-language:reflectiveCalls",
  "-deprecation",
  "-feature",
  "-Xcheckinit"
)
addCompilerPlugin("edu.berkeley.cs" % "chisel3-plugin" % "3.5.6" cross CrossVersion.full)
addCompilerPlugin("org.scalamacros" % "paradise" % "2.1.1" cross CrossVersion.full)