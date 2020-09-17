void RebinProfThetaYTimeModulo()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 16 14:23:42 2020) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "c",1120,480,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TProfile *ThetaY_vs_DecayTime_Modulo_2_pfx = new TProfile("ThetaY_vs_DecayTime_Modulo_2_pfx","",6,0,3.928792,"");
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinEntries(1,447999);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinEntries(2,458275);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinEntries(3,473030);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinEntries(4,479231);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinEntries(5,464800);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinEntries(6,441623);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinEntries(7,282900);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinContent(1,66457);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinContent(2,77951.67);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinContent(3,51661.33);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinContent(4,17219);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinContent(5,-25857.33);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinContent(6,-6385.667);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinContent(7,-20888);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinError(1,10180.28);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinError(2,10004.49);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinError(3,9945.983);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinError(4,10087.6);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinError(5,10162.19);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinError(6,10138.4);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetBinError(7,8147.46);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetEntries(3047858);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetStats(0);
   ThetaY_vs_DecayTime_Modulo_2_pfx->SetLineWidth(3);
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetXaxis()->SetTitle("t^{mod}_{g#minus2} [#mus]");
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetXaxis()->CenterTitle(true);
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetYaxis()->CenterTitle(true);
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetYaxis()->SetNdivisions(4000510);
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetYaxis()->SetLabelSize(0.035);
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetZaxis()->SetLabelSize(0.035);
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetZaxis()->SetTitleSize(0.035);
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_DecayTime_Modulo_2_pfx->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_DecayTime_Modulo_2_pfx->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
