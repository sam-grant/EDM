void S12_profileX_thetaY_vs_Phi_tracks_750_2500_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 18:00:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(2.475575,-1.814058,3.355221,3.490347);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TProfile *S12_ThetaY_vs_Phi_pfx = new TProfile("S12_ThetaY_vs_Phi_pfx","",14,2.56354,3.267256,"");
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(3,0.00143747);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(4,0.0342597);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(5,0.2149018);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(6,0.6538093);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(7,1.573311);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(8,3.183038);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(9,5.727599);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(10,8.962626);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(11,10.00359);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(12,5.243172);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(13,0.4973646);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(3,0.001197892);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(4,-0.002994729);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(5,-0.02335889);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(6,0.04851461);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(7,-0.1778869);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(8,-0.4743651);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(9,-3.670939);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(10,-2.847389);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(11,-5.975683);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(12,-2.409559);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(13,-0.05150934);
   S12_ThetaY_vs_Phi_pfx->SetBinError(3,0.1814994);
   S12_ThetaY_vs_Phi_pfx->SetBinError(4,1.077245);
   S12_ThetaY_vs_Phi_pfx->SetBinError(5,3.243299);
   S12_ThetaY_vs_Phi_pfx->SetBinError(6,6.429677);
   S12_ThetaY_vs_Phi_pfx->SetBinError(7,11.38571);
   S12_ThetaY_vs_Phi_pfx->SetBinError(8,18.90503);
   S12_ThetaY_vs_Phi_pfx->SetBinError(9,31.00755);
   S12_ThetaY_vs_Phi_pfx->SetBinError(10,47.30877);
   S12_ThetaY_vs_Phi_pfx->SetBinError(11,57.99583);
   S12_ThetaY_vs_Phi_pfx->SetBinError(12,46.91701);
   S12_ThetaY_vs_Phi_pfx->SetBinError(13,16.0861);
   S12_ThetaY_vs_Phi_pfx->SetEntries(150661);
   S12_ThetaY_vs_Phi_pfx->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   S12_ThetaY_vs_Phi_pfx->SetLineColor(ci);
   S12_ThetaY_vs_Phi_pfx->GetXaxis()->SetTitle("Decay azimuthal angle [rad]");
   S12_ThetaY_vs_Phi_pfx->GetXaxis()->CenterTitle(true);
   S12_ThetaY_vs_Phi_pfx->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_vs_Phi_pfx->GetXaxis()->SetTitleSize(0.04);
   S12_ThetaY_vs_Phi_pfx->GetXaxis()->SetTitleOffset(1.1);
   S12_ThetaY_vs_Phi_pfx->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_vs_Phi_pfx->GetYaxis()->CenterTitle(true);
   S12_ThetaY_vs_Phi_pfx->GetYaxis()->SetNdivisions(4000510);
   S12_ThetaY_vs_Phi_pfx->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_vs_Phi_pfx->GetYaxis()->SetTitleSize(0.04);
   S12_ThetaY_vs_Phi_pfx->GetYaxis()->SetTitleOffset(1.1);
   S12_ThetaY_vs_Phi_pfx->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_vs_Phi_pfx->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_vs_Phi_pfx->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_vs_Phi_pfx->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_vs_Phi_pfx->Draw("E");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
