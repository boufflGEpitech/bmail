//
// Process.hh for process in /home/dell-a_f//projets/bmail
// 
// Made by florian dell-aiera
// Login   <dell-a_f@epitech.net>
// 
// Started on  Sat Mar  9 15:39:33 2013 florian dell-aiera
// Last update Sat Mar  9 22:35:21 2013 florian dell-aiera
//

#ifndef	__PROCESS_HH__
#define	__PROCESS_HH__

#include	"Core.hh"

class	Process: public Core
{
public:
  Process();
  virtual	~Process();
  virtual bool	sendMail();
  virtual bool	receiveMail();
  virtual bool	deleteMail();
};

#endif
