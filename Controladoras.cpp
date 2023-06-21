//SERVIÇO
#include "controladoras.h"

bool CntrISAutenticacao::autenticar(const Matricula& matricula, const Senha& senha){
    ComandoLerSenha lerSenha(matricula);
    if (!lerSenha.executar())
        return 0;
    string senhaRecuperada;
    senhaRecuperada = lerSenha.getResultado();
    return (senha.getSenha() == senhaRecuperada);
}
