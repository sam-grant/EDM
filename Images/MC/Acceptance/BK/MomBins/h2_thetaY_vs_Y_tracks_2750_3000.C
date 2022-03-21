void h2_thetaY_vs_Y_tracks_2750_3000()
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
   
   TH2D *h2_thetaY_vs_Y_decays_clone_2750_3000 = new TH2D("h2_thetaY_vs_Y_decays_clone_2750_3000","2750 < p [Mev] < 3000",12,-60,60,315,-1575,1575);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetBinContent(2202,3);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetBinContent(2203,7);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetBinContent(2204,1);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetBinContent(2205,2);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetBinContent(2207,1);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetBinContent(2215,1);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetBinContent(2216,1);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetBinContent(2217,9);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetBinContent(2218,12);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetBinContent(2219,9);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetBinContent(2220,10);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetBinContent(2232,2);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetBinContent(2233,3);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetBinContent(2234,4);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetBinContent(2235,2);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetEntries(67);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetStats(0);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContour(20);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(0,0);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(1,0.6);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(2,1.2);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(3,1.8);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(4,2.4);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(5,3);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(6,3.6);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(7,4.2);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(8,4.8);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(9,5.4);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(10,6);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(11,6.6);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(12,7.2);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(13,7.8);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(14,8.4);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(15,9);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(16,9.6);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(17,10.2);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(18,10.8);
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetContourLevel(19,11.4);
   
   TPaletteAxis *palette = new TPaletteAxis(60.77922,-1575,67.79221,1575,h2_thetaY_vs_Y_decays_clone_2750_3000);
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
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#000099");
   h2_thetaY_vs_Y_decays_clone_2750_3000->SetLineColor(ci);
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetXaxis()->SetTitle("y [mm]");
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetXaxis()->SetRange(1,12);
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetXaxis()->CenterTitle(true);
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetXaxis()->SetLabelFont(42);
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetXaxis()->SetTitleSize(0.04);
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetXaxis()->SetTitleOffset(1.1);
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetXaxis()->SetTitleFont(42);
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetYaxis()->SetTitle("#theta_{y} [mrad]");
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetYaxis()->SetRange(1,1260);
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetYaxis()->CenterTitle(true);
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetYaxis()->SetNdivisions(4000510);
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetYaxis()->SetLabelFont(42);
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetYaxis()->SetTitleSize(0.04);
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetYaxis()->SetTitleOffset(1.1);
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetYaxis()->SetTitleFont(42);
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetZaxis()->SetLabelFont(42);
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetZaxis()->SetTitleOffset(1);
   h2_thetaY_vs_Y_decays_clone_2750_3000->GetZaxis()->SetTitleFont(42);
   h2_thetaY_vs_Y_decays_clone_2750_3000->Draw("COLZ");
   
   TPaveText *pt = new TPaveText(0.3040704,0.9341608,0.6959296,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("2750 < p [Mev] < 3000");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
