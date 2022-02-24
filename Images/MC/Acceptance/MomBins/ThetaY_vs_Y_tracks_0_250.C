void ThetaY_vs_Y_tracks_0_250()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb 23 14:43:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH2D *S12S18_ThetaY_vs_Y_0_250 = new TH2D("S12S18_ThetaY_vs_Y_0_250","Reco vertices: 0 < p [MeV] < 250",48,-60,60,48,-92.05945,92.05945);
   S12S18_ThetaY_vs_Y_0_250->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   S12S18_ThetaY_vs_Y_0_250->SetLineColor(ci);
   S12S18_ThetaY_vs_Y_0_250->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12S18_ThetaY_vs_Y_0_250->GetXaxis()->CenterTitle(true);
   S12S18_ThetaY_vs_Y_0_250->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_vs_Y_0_250->GetXaxis()->SetTitleSize(0.04);
   S12S18_ThetaY_vs_Y_0_250->GetXaxis()->SetTitleOffset(1.1);
   S12S18_ThetaY_vs_Y_0_250->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_vs_Y_0_250->GetYaxis()->SetTitle(" #theta_{y} [mrad]");
   S12S18_ThetaY_vs_Y_0_250->GetYaxis()->CenterTitle(true);
   S12S18_ThetaY_vs_Y_0_250->GetYaxis()->SetNdivisions(4000510);
   S12S18_ThetaY_vs_Y_0_250->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_vs_Y_0_250->GetYaxis()->SetTitleSize(0.04);
   S12S18_ThetaY_vs_Y_0_250->GetYaxis()->SetTitleOffset(1.1);
   S12S18_ThetaY_vs_Y_0_250->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_vs_Y_0_250->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_vs_Y_0_250->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_vs_Y_0_250->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_vs_Y_0_250->Draw("COLZ");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
