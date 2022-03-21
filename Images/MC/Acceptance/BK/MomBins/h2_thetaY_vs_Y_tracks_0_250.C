void h2_thetaY_vs_Y_tracks_0_250()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Mar 17 01:35:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75.58442,-1968.75,80.25974,1968.75);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.13);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH2D *h2_thetaY_vs_Y_decays_clone_0_250 = new TH2D("h2_thetaY_vs_Y_decays_clone_0_250","0 < p [Mev] < 250",12,-60,60,315,-1575,1575);
   h2_thetaY_vs_Y_decays_clone_0_250->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h2_thetaY_vs_Y_decays_clone_0_250->SetLineColor(ci);
   h2_thetaY_vs_Y_decays_clone_0_250->GetXaxis()->SetTitle("y [mm]");
   h2_thetaY_vs_Y_decays_clone_0_250->GetXaxis()->SetRange(1,12);
   h2_thetaY_vs_Y_decays_clone_0_250->GetXaxis()->CenterTitle(true);
   h2_thetaY_vs_Y_decays_clone_0_250->GetXaxis()->SetLabelFont(42);
   h2_thetaY_vs_Y_decays_clone_0_250->GetXaxis()->SetTitleSize(0.04);
   h2_thetaY_vs_Y_decays_clone_0_250->GetXaxis()->SetTitleOffset(1.1);
   h2_thetaY_vs_Y_decays_clone_0_250->GetXaxis()->SetTitleFont(42);
   h2_thetaY_vs_Y_decays_clone_0_250->GetYaxis()->SetTitle("#theta_{y} [mrad]");
   h2_thetaY_vs_Y_decays_clone_0_250->GetYaxis()->SetRange(1,1260);
   h2_thetaY_vs_Y_decays_clone_0_250->GetYaxis()->CenterTitle(true);
   h2_thetaY_vs_Y_decays_clone_0_250->GetYaxis()->SetNdivisions(4000510);
   h2_thetaY_vs_Y_decays_clone_0_250->GetYaxis()->SetLabelFont(42);
   h2_thetaY_vs_Y_decays_clone_0_250->GetYaxis()->SetTitleSize(0.04);
   h2_thetaY_vs_Y_decays_clone_0_250->GetYaxis()->SetTitleOffset(1.1);
   h2_thetaY_vs_Y_decays_clone_0_250->GetYaxis()->SetTitleFont(42);
   h2_thetaY_vs_Y_decays_clone_0_250->GetZaxis()->SetLabelFont(42);
   h2_thetaY_vs_Y_decays_clone_0_250->GetZaxis()->SetTitleOffset(1);
   h2_thetaY_vs_Y_decays_clone_0_250->GetZaxis()->SetTitleFont(42);
   h2_thetaY_vs_Y_decays_clone_0_250->Draw("COLZ");
   
   TPaveText *pt = new TPaveText(0.3448995,0.9341608,0.6551005,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("0 < p [Mev] < 250");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
