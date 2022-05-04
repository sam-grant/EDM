void S12_profileX_thetaY_vs_Y_tracks_750_2500_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 18:00:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-75,-23.68238,75,24.31681);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TProfile *S12_ThetaY_vs_Y_pfx = new TProfile("S12_ThetaY_vs_Y_pfx","",12,-60,60,"");
   S12_ThetaY_vs_Y_pfx->SetBinEntries(2,0.08090909);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(3,0.6990909);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(4,2.395227);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(5,5.601591);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(6,8.526591);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(7,8.417045);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(8,5.459091);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(9,2.293636);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(10,0.6993182);
   S12_ThetaY_vs_Y_pfx->SetBinEntries(11,0.07340909);
   S12_ThetaY_vs_Y_pfx->SetBinContent(2,1.380682);
   S12_ThetaY_vs_Y_pfx->SetBinContent(3,9.556818);
   S12_ThetaY_vs_Y_pfx->SetBinContent(4,26.18466);
   S12_ThetaY_vs_Y_pfx->SetBinContent(5,37.32898);
   S12_ThetaY_vs_Y_pfx->SetBinContent(6,16.16875);
   S12_ThetaY_vs_Y_pfx->SetBinContent(7,-25.10398);
   S12_ThetaY_vs_Y_pfx->SetBinContent(8,-41.94545);
   S12_ThetaY_vs_Y_pfx->SetBinContent(9,-26.65795);
   S12_ThetaY_vs_Y_pfx->SetBinContent(10,-10.48125);
   S12_ThetaY_vs_Y_pfx->SetBinContent(11,-1.213068);
   S12_ThetaY_vs_Y_pfx->SetBinError(2,5.896359);
   S12_ThetaY_vs_Y_pfx->SetBinError(3,15.60904);
   S12_ThetaY_vs_Y_pfx->SetBinError(4,27.72929);
   S12_ThetaY_vs_Y_pfx->SetBinError(5,38.46647);
   S12_ThetaY_vs_Y_pfx->SetBinError(6,44.08755);
   S12_ThetaY_vs_Y_pfx->SetBinError(7,44.83066);
   S12_ThetaY_vs_Y_pfx->SetBinError(8,38.94599);
   S12_ThetaY_vs_Y_pfx->SetBinError(9,27.77497);
   S12_ThetaY_vs_Y_pfx->SetBinError(10,16.56963);
   S12_ThetaY_vs_Y_pfx->SetBinError(11,5.389779);
   S12_ThetaY_vs_Y_pfx->SetEntries(150682);
   S12_ThetaY_vs_Y_pfx->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   S12_ThetaY_vs_Y_pfx->SetLineColor(ci);
   S12_ThetaY_vs_Y_pfx->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12_ThetaY_vs_Y_pfx->GetXaxis()->CenterTitle(true);
   S12_ThetaY_vs_Y_pfx->GetXaxis()->SetLabelFont(42);
   S12_ThetaY_vs_Y_pfx->GetXaxis()->SetTitleSize(0.04);
   S12_ThetaY_vs_Y_pfx->GetXaxis()->SetTitleOffset(1.1);
   S12_ThetaY_vs_Y_pfx->GetXaxis()->SetTitleFont(42);
   S12_ThetaY_vs_Y_pfx->GetYaxis()->CenterTitle(true);
   S12_ThetaY_vs_Y_pfx->GetYaxis()->SetNdivisions(4000510);
   S12_ThetaY_vs_Y_pfx->GetYaxis()->SetLabelFont(42);
   S12_ThetaY_vs_Y_pfx->GetYaxis()->SetTitleSize(0.04);
   S12_ThetaY_vs_Y_pfx->GetYaxis()->SetTitleOffset(1.1);
   S12_ThetaY_vs_Y_pfx->GetYaxis()->SetTitleFont(42);
   S12_ThetaY_vs_Y_pfx->GetZaxis()->SetLabelFont(42);
   S12_ThetaY_vs_Y_pfx->GetZaxis()->SetTitleOffset(1);
   S12_ThetaY_vs_Y_pfx->GetZaxis()->SetTitleFont(42);
   S12_ThetaY_vs_Y_pfx->Draw("E");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
