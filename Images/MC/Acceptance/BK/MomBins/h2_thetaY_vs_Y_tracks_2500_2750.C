void h2_thetaY_vs_Y_tracks_2500_2750()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Mar 17 01:35:21 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75.58442,-1968.75,80.25974,1968.75);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.13);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH2D *h2_thetaY_vs_Y_decays_clone_2500_2750 = new TH2D("h2_thetaY_vs_Y_decays_clone_2500_2750","2500 < p [Mev] < 2750",12,-60,60,315,-1575,1575);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2200,3);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2201,5);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2202,10);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2203,34);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2204,46);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2205,35);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2206,15);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2215,4);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2216,23);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2217,48);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2218,71);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2219,77);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2220,48);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2221,23);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2222,2);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2231,12);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2232,41);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2233,30);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2234,24);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2235,11);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2236,4);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetBinContent(2237,1);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetEntries(567);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetStats(0);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContour(20);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(0,0);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(1,3.85);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(2,7.7);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(3,11.55);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(4,15.4);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(5,19.25);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(6,23.1);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(7,26.95);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(8,30.8);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(9,34.65);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(10,38.5);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(11,42.35);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(12,46.2);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(13,50.05);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(14,53.9);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(15,57.75);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(16,61.6);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(17,65.45);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(18,69.3);
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetContourLevel(19,73.15);
   
   TPaletteAxis *palette = new TPaletteAxis(60.77922,-1575,67.79221,1575,h2_thetaY_vs_Y_decays_clone_2500_2750);
   palette->SetLabelColor(1);
   palette->SetLabelFont(42);
   palette->SetLabelOffset(0.005);
   palette->SetLabelSize(0.035);
   palette->SetTitleOffset(1);
   palette->SetTitleSize(0.035);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#700002");
   palette->SetFillColor(ci);
   palette->SetFillStyle(1001);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#000099");
   h2_thetaY_vs_Y_decays_clone_2500_2750->SetLineColor(ci);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetXaxis()->SetTitle("y [mm]");
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetXaxis()->SetRange(1,12);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetXaxis()->CenterTitle(true);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetXaxis()->SetLabelFont(42);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetXaxis()->SetTitleSize(0.04);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetXaxis()->SetTitleOffset(1.1);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetXaxis()->SetTitleFont(42);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetYaxis()->SetTitle("#theta_{y} [mrad]");
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetYaxis()->SetRange(1,1260);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetYaxis()->CenterTitle(true);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetYaxis()->SetNdivisions(4000510);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetYaxis()->SetLabelFont(42);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetYaxis()->SetTitleSize(0.04);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetYaxis()->SetTitleOffset(1.1);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetYaxis()->SetTitleFont(42);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetZaxis()->SetLabelFont(42);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetZaxis()->SetTitleOffset(1);
   h2_thetaY_vs_Y_decays_clone_2500_2750->GetZaxis()->SetTitleFont(42);
   h2_thetaY_vs_Y_decays_clone_2500_2750->Draw("COLZ");
   
   TPaveText *pt = new TPaveText(0.3040704,0.9341608,0.6959296,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("2500 < p [Mev] < 2750");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
