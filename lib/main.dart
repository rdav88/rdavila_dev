import 'package:flutter/material.dart';
import 'package:google_fonts/google_fonts.dart';

void main() => runApp(VCardApp());

class VCardApp extends StatelessWidget {
  const VCardApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'V-Card',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: VCardScreen(),
    );
  }
}

class VCardScreen extends StatelessWidget {
  const VCardScreen({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Mi Tarjeta Digital'),
        centerTitle: true,
      ),
      backgroundColor: Colors.white,
      body: Center(
        child: Padding(
          padding: const EdgeInsets.all(16.0),
          child: Container(
            decoration: BoxDecoration(
              color: Colors.grey.shade400,
              borderRadius: BorderRadius.circular(15),
              boxShadow: [
                BoxShadow(
                  color: Colors.black.withOpacity(1),
                  spreadRadius: 8,
                  blurRadius: 10,
                  offset: const Offset(0, 3),
                ),
              ],
            ),
            child: Padding(
              padding: const EdgeInsets.all(20.0),
              child: Column(
                mainAxisAlignment: MainAxisAlignment.center,
                children: [
                  const CircleAvatar(
                    radius: 80,
                    backgroundImage: AssetImage('assets/profile.jpg'),
                  ),
                  const SizedBox(height: 25),
                  Text(
                    'Rubén A. Dávila',
                    style: GoogleFonts.lato(
                      fontSize: 28,
                      fontWeight: FontWeight.bold,
                    ),
                  ),
                  const SizedBox(height: 10),
                  Text(
                    'rdavila@arecibointer.edu',
                    style: GoogleFonts.openSans(fontSize: 16),
                  ),
                  const SizedBox(height: 5),
                  Text(
                    '+1 (201) 913-8061',
                    style: GoogleFonts.openSans(fontSize: 16),
                  ),
                  const SizedBox(height: 5),
                  Text(
                    'https://github.com/rdav88',
                    style: GoogleFonts.openSans(
                      fontSize: 18,
                      color: Colors.blue,
                    ),
                  ),
                  const SizedBox(height: 20),
                  Image.asset(
                    'assets/qrcode.png',
                    width: 125,
                    height: 125,
                  ),
                  const SizedBox(height: 20),
                  Row(
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: [
                      Expanded(
                        child: Text(
                          'Usuario de Github: rdavila_dev',
                          style: GoogleFonts.openSans
                            (fontSize: 14,
                            color:Colors.red),
                          textAlign: TextAlign.center,
                        ),
                      ),
                    ],
                  ),
                ],
              ),
            ),
          ),
        ),
      ),
    );
  }
}