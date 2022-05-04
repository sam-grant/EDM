void S12_profileX_thetaY_vs_R_tracks_750_2500_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 18:00:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-75,-1.854828,75,0.7220194);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TProfile *S12_ThetaY_vs_R_pfx = new TProfile("S12_ThetaY_vs_R_pfx","",12,-60,60,"");
   S12_ThetaY_vs_R_pfx->SetBinEntries(2,0.1442199);
   S12_ThetaY_vs_R_pfx->SetBinEntries(3,0.8607767);
   S12_ThetaY_vs_R_pfx->SetBinEntries(4,2.116966);
   S12_ThetaY_vs_R_pfx->SetBinEntries(5,3.727913);
   S12_ThetaY_vs_R_pfx->SetBinEntries(6,5.412446);
   S12_ThetaY_vs_R_pfx->SetBinEntries(7,6.64933);
   S12_ThetaY_vs_R_pfx->SetBinEntries(8,8.280718);
   S12_ThetaY_vs_R_pfx->SetBinEntries(9,5.167386);
   S12_ThetaY_vs_R_pfx->SetBinEntries(10,1.638655);
   S12_ThetaY_vs_R_pfx->SetBinEntries(11,0.2241653);
   S12_ThetaY_vs_R_pfx->SetBinContent(2,-0.05053373);
   S12_ThetaY_vs_R_pfx->SetBinContent(3,-1.018624);
   S12_ThetaY_vs_R_pfx->SetBinContent(4,-1.022598);
   S12_ThetaY_vs_R_pfx->SetBinContent(5,-1.4263);
   S12_ThetaY_vs_R_pfx->SetBinContent(6,-1.646037);
   S12_ThetaY_vs_R_pfx->SetBinContent(7,-2.706677);
   S12_ThetaY_vs_R_pfx->SetBinContent(8,-4.058596);
   S12_ThetaY_vs_R_pfx->SetBinContent(9,-1.900977);
   S12_ThetaY_vs_R_pfx->SetBinContent(10,-0.7103112);
   S12_ThetaY_vs_R_pfx->SetBinContent(11,-0.2310924);
   S12_ThetaY_vs_R_pfx->SetBinError(2,6.858598);
   S12_ThetaY_vs_R_pfx->SetBinError(3,16.19344);
   S12_ThetaY_vs_R_pfx->SetBinError(4,24.66517);
   S12_ThetaY_vs_R_pfx->SetBinError(5,32.60455);
   S12_ThetaY_vs_R_pfx->SetBinError(6,38.50677);
   S12_ThetaY_vs_R_pfx->SetBinError(7,41.89751);
   S12_ThetaY_vs_R_pfx->SetBinError(8,46.07025);
   S12_ThetaY_vs_R_pfx->SetBinError(9,35.86066);
   S12_ThetaY_vs_R_pfx->SetBinError(10,19.72669);
   S12_ThetaY_vs_R_pfx->SetBinError(11,7.048851);
   S12_ThetaY_vs_R_pfx->SetEntries(150682);
   S12_ThetaY_vs_R_pfx->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   S12_ThetaY_vs_R_pfx->SetLineColor(ci);
   S12_ThetaY_vs_R_pfx->GetXaxis()->SetTitle("Decay radial position [mm]");
   S12_ThetaY_vs_R_pfx->GetXaxis()->CenterTitle(true);
   S12_ThetaY_vs_R_pfx->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_vs_R_pfx->GetXaxis()->SetTitleSize(0.04);
   S12_ThetaY_vs_R_pfx->GetXaxis()->SetTitleOffset(1.1);
   S12_ThetaY_vs_R_pfx->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_vs_R_pfx->GetYaxis()->CenterTitle(true);
   S12_ThetaY_vs_R_pfx->GetYaxis()->SetNdivisions(4000510);
   S12_ThetaY_vs_R_pfx->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_vs_R_pfx->GetYaxis()->SetTitleSize(0.04);
   S12_ThetaY_vs_R_pfx->GetYaxis()->SetTitleOffset(1.1);
   S12_ThetaY_vs_R_pfx->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_vs_R_pfx->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_vs_R_pfx->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_vs_R_pfx->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_vs_R_pfx->Draw("E");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
