void InverseAcceptanceSurface_2750_3000()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Mar 17 01:35:21 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.9935258,-1.117922,1.054981,1.117922);
   TView *view13 = TView::CreateView(1);
   view13->SetRange(-60,-95,0,60,95,1.1025);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH2D *WeightMap_2750_3000__13 = new TH2D("WeightMap_2750_3000__13","2750 < p [MeV] < 3000",12,-60,60,315,-1575,1575);
   WeightMap_2750_3000__13->SetBinContent(2202,0.8901893);
   WeightMap_2750_3000__13->SetBinContent(2203,1);
   WeightMap_2750_3000__13->SetBinContent(2204,0.09926873);
   WeightMap_2750_3000__13->SetBinContent(2205,0.202122);
   WeightMap_2750_3000__13->SetBinContent(2207,0.2918077);
   WeightMap_2750_3000__13->SetBinContent(2215,0.2691647);
   WeightMap_2750_3000__13->SetBinContent(2216,0.08871964);
   WeightMap_2750_3000__13->SetBinContent(2217,0.3988791);
   WeightMap_2750_3000__13->SetBinContent(2218,0.3554761);
   WeightMap_2750_3000__13->SetBinContent(2219,0.2714391);
   WeightMap_2750_3000__13->SetBinContent(2220,0.4435183);
   WeightMap_2750_3000__13->SetBinContent(2232,0.1952324);
   WeightMap_2750_3000__13->SetBinContent(2233,0.3099233);
   WeightMap_2750_3000__13->SetBinContent(2234,0.5952525);
   WeightMap_2750_3000__13->SetBinContent(2235,0.6372205);
   WeightMap_2750_3000__13->SetBinError(2202,14.80679);
   WeightMap_2750_3000__13->SetBinError(2203,15.69349);
   WeightMap_2750_3000__13->SetBinError(2204,4.944539);
   WeightMap_2750_3000__13->SetBinError(2205,7.055478);
   WeightMap_2750_3000__13->SetBinError(2207,8.477504);
   WeightMap_2750_3000__13->SetBinError(2215,8.141955);
   WeightMap_2750_3000__13->SetBinError(2216,4.674439);
   WeightMap_2750_3000__13->SetBinError(2217,9.91152);
   WeightMap_2750_3000__13->SetBinError(2218,9.356746);
   WeightMap_2750_3000__13->SetBinError(2219,8.176281);
   WeightMap_2750_3000__13->SetBinError(2220,10.45142);
   WeightMap_2750_3000__13->SetBinError(2232,6.934188);
   WeightMap_2750_3000__13->SetBinError(2233,8.736686);
   WeightMap_2750_3000__13->SetBinError(2234,12.10794);
   WeightMap_2750_3000__13->SetBinError(2235,12.5275);
   WeightMap_2750_3000__13->SetEntries(0.02455771);
   WeightMap_2750_3000__13->SetStats(0);
   WeightMap_2750_3000__13->SetContour(20);
   WeightMap_2750_3000__13->SetContourLevel(0,0);
   WeightMap_2750_3000__13->SetContourLevel(1,0.05);
   WeightMap_2750_3000__13->SetContourLevel(2,0.1);
   WeightMap_2750_3000__13->SetContourLevel(3,0.15);
   WeightMap_2750_3000__13->SetContourLevel(4,0.2);
   WeightMap_2750_3000__13->SetContourLevel(5,0.25);
   WeightMap_2750_3000__13->SetContourLevel(6,0.3);
   WeightMap_2750_3000__13->SetContourLevel(7,0.35);
   WeightMap_2750_3000__13->SetContourLevel(8,0.4);
   WeightMap_2750_3000__13->SetContourLevel(9,0.45);
   WeightMap_2750_3000__13->SetContourLevel(10,0.5);
   WeightMap_2750_3000__13->SetContourLevel(11,0.55);
   WeightMap_2750_3000__13->SetContourLevel(12,0.6);
   WeightMap_2750_3000__13->SetContourLevel(13,0.65);
   WeightMap_2750_3000__13->SetContourLevel(14,0.7);
   WeightMap_2750_3000__13->SetContourLevel(15,0.75);
   WeightMap_2750_3000__13->SetContourLevel(16,0.8);
   WeightMap_2750_3000__13->SetContourLevel(17,0.85);
   WeightMap_2750_3000__13->SetContourLevel(18,0.9);
   WeightMap_2750_3000__13->SetContourLevel(19,0.95);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   WeightMap_2750_3000__13->SetLineColor(ci);
   WeightMap_2750_3000__13->GetXaxis()->SetTitle("y [mm]");
   WeightMap_2750_3000__13->GetXaxis()->SetRange(1,12);
   WeightMap_2750_3000__13->GetXaxis()->CenterTitle(true);
   WeightMap_2750_3000__13->GetXaxis()->SetLabelFont(42);
   WeightMap_2750_3000__13->GetXaxis()->SetTitleSize(0.04);
   WeightMap_2750_3000__13->GetXaxis()->SetTitleOffset(1.5);
   WeightMap_2750_3000__13->GetXaxis()->SetTitleFont(42);
   WeightMap_2750_3000__13->GetYaxis()->SetTitle("#theta_{y} [mrad]");
   WeightMap_2750_3000__13->GetYaxis()->SetRange(149,167);
   WeightMap_2750_3000__13->GetYaxis()->CenterTitle(true);
   WeightMap_2750_3000__13->GetYaxis()->SetNdivisions(4000510);
   WeightMap_2750_3000__13->GetYaxis()->SetLabelFont(42);
   WeightMap_2750_3000__13->GetYaxis()->SetTitleSize(0.04);
   WeightMap_2750_3000__13->GetYaxis()->SetTitleOffset(1.6);
   WeightMap_2750_3000__13->GetYaxis()->SetTitleFont(42);
   WeightMap_2750_3000__13->GetZaxis()->CenterTitle(true);
   WeightMap_2750_3000__13->GetZaxis()->SetLabelFont(42);
   WeightMap_2750_3000__13->GetZaxis()->SetTitleOffset(1);
   WeightMap_2750_3000__13->GetZaxis()->SetTitleFont(42);
   WeightMap_2750_3000__13->Draw("SURF2");
   
   TPaveText *pt = new TPaveText(0.3021859,0.9341608,0.6978141,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("2750 < p [MeV] < 3000");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
