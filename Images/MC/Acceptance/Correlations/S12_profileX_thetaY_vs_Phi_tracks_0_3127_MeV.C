void S12_profileX_thetaY_vs_Phi_tracks_0_3127_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 31 19:04:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(2.016902,-4.16462,3.462035,8.049977);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TProfile *S12_ThetaY_vs_Phi_pfx = new TProfile("S12_ThetaY_vs_Phi_pfx","",23,2.161416,3.317522,"");
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(3,0.0002347418);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(5,0.0004694836);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(6,0.0004694836);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(7,0.001643192);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(8,0.007511737);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(9,0.02347418);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(10,0.06995305);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(11,0.1504695);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(12,0.2690141);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(13,0.4603286);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(14,0.8105634);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(15,1.605869);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(16,3.130751);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(17,5.612676);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(18,8.79554);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(19,10.777);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(20,6.801408);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(21,1.64554);
   S12_ThetaY_vs_Phi_pfx->SetBinEntries(22,0.0370892);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(3,0.0005868545);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(6,-0.001173709);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(7,0.001760563);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(8,-0.001173709);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(9,0.01173709);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(10,-0.01995305);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(11,0.004107981);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(12,0.01173709);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(13,-0.02758216);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(14,-0.009976526);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(15,-0.1519953);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(16,-0.4888498);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(17,-3.59507);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(18,-2.795188);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(19,-6.187793);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(20,-2.211268);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(21,1.409624);
   S12_ThetaY_vs_Phi_pfx->SetBinContent(22,0.149061);
   S12_ThetaY_vs_Phi_pfx->SetBinError(3,0.03830321);
   S12_ThetaY_vs_Phi_pfx->SetBinError(5,0.05416892);
   S12_ThetaY_vs_Phi_pfx->SetBinError(6,0.05416892);
   S12_ThetaY_vs_Phi_pfx->SetBinError(7,0.1013408);
   S12_ThetaY_vs_Phi_pfx->SetBinError(8,0.3752933);
   S12_ThetaY_vs_Phi_pfx->SetBinError(9,0.7544858);
   S12_ThetaY_vs_Phi_pfx->SetBinError(10,1.35855);
   S12_ThetaY_vs_Phi_pfx->SetBinError(11,2.153513);
   S12_ThetaY_vs_Phi_pfx->SetBinError(12,3.119773);
   S12_ThetaY_vs_Phi_pfx->SetBinError(13,4.596545);
   S12_ThetaY_vs_Phi_pfx->SetBinError(14,6.968764);
   S12_ThetaY_vs_Phi_pfx->SetBinError(15,11.3977);
   S12_ThetaY_vs_Phi_pfx->SetBinError(16,18.7309);
   S12_ThetaY_vs_Phi_pfx->SetBinError(17,30.69323);
   S12_ThetaY_vs_Phi_pfx->SetBinError(18,46.89698);
   S12_ThetaY_vs_Phi_pfx->SetBinError(19,62.69418);
   S12_ThetaY_vs_Phi_pfx->SetBinError(20,58.23003);
   S12_ThetaY_vs_Phi_pfx->SetBinError(21,33.87291);
   S12_ThetaY_vs_Phi_pfx->SetBinError(22,5.727323);
   S12_ThetaY_vs_Phi_pfx->SetEntries(171252);
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
