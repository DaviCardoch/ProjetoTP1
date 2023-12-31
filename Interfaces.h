#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "Dominios.h"
#include "Entidades.h"
#include <stdexcept>

class IAAutenticacao {
    public:
        virtual bool autenticar(Matricula*) = 0;
        virtual void setCntrISAutenticacao(ISAutenticacao*) = 0;
        virtual ~IAAutenticacao(){}
};

class IADesenvolvedor {
    public:
        virtual void executar(Matricula) = 0;
        virtual void cadastrar() = 0;
        virtual void setCntrISDesenvolvedor(ISDesenvolvedor*) = 0;
        virtual void ~IADesenvolvedor(){}
};

class IATeste {
    public:
        virtual void executar(Matricula) = 0;
        virtual void setCtrISTeste(ISTeste*) = 0;
        virtual ~IATeste(){}
};

class ISAutenticacao {
    public:
        virtual bool autenticar(const Matricula&, const Senha&) = 0;
        virtual ~ISAutenticacao(){}
};

class ISDesenvolvedor {
    public:
        virtual bool cadastrar(const Desenvolvedor&) = 0;
        virtual bool visualizar(const Desenvolvedor&) = 0;
        virtual bool editar(const Desenvolvedor&) = 0;
        virtual bool descadastrar(const Desenvolvedor&) = 0;
        virtual ~ISDesenvolvedor(){}
};

class ISTeste {
    public:
        virtual bool cadastrar(const Teste&) = 0;
        virtual bool visualizar(const Teste&) = 0;
        virtual bool editar(const Teste&) = 0;
        virtual bool descadastrar(const Teste&) = 0;
        virtual ~ISTeste(){}
};

#endif // INTERFACES_H_INCLUDED
