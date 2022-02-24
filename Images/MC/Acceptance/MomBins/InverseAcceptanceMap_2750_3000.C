void InverseAcceptanceMap_2750_3000()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 24 15:03:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75.58442,-115.0743,80.25974,115.0743);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.13);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH2D *WeightMap_2750_3000 = new TH2D("WeightMap_2750_3000","",12,-60,60,12,-92.05945,92.05945);
   WeightMap_2750_3000->SetBinContent(87,0.06185971);
   WeightMap_2750_3000->SetBinContent(88,0.5565056);
   WeightMap_2750_3000->SetBinContent(89,0.6664095);
   WeightMap_2750_3000->SetBinContent(90,0.7032427);
   WeightMap_2750_3000->SetBinContent(91,1.001586);
   WeightMap_2750_3000->SetBinContent(92,1.06686);
   WeightMap_2750_3000->SetBinContent(93,1.170416);
   WeightMap_2750_3000->SetBinContent(94,1.059061);
   WeightMap_2750_3000->SetBinContent(95,0.4583545);
   WeightMap_2750_3000->SetBinContent(100,0.4481569);
   WeightMap_2750_3000->SetBinContent(101,1.030871);
   WeightMap_2750_3000->SetBinContent(102,1.077191);
   WeightMap_2750_3000->SetBinContent(103,0.8862464);
   WeightMap_2750_3000->SetBinContent(104,0.8308264);
   WeightMap_2750_3000->SetBinContent(105,0.7739726);
   WeightMap_2750_3000->SetBinContent(106,0.6186741);
   WeightMap_2750_3000->SetBinContent(107,0.2812492);
   WeightMap_2750_3000->SetBinContent(108,0.061197);
   WeightMap_2750_3000->SetBinError(87,0.06186221);
   WeightMap_2750_3000->SetBinError(88,0.1091794);
   WeightMap_2750_3000->SetBinError(89,0.08206504);
   WeightMap_2750_3000->SetBinError(90,0.06966338);
   WeightMap_2750_3000->SetBinError(91,0.08294609);
   WeightMap_2750_3000->SetBinError(92,0.1036948);
   WeightMap_2750_3000->SetBinError(93,0.1593952);
   WeightMap_2750_3000->SetBinError(94,0.2570377);
   WeightMap_2750_3000->SetBinError(95,0.4584917);
   WeightMap_2750_3000->SetBinError(100,0.4482881);
   WeightMap_2750_3000->SetBinError(101,0.2501913);
   WeightMap_2750_3000->SetBinError(102,0.152445);
   WeightMap_2750_3000->SetBinError(103,0.09507058);
   WeightMap_2750_3000->SetBinError(104,0.07557065);
   WeightMap_2750_3000->SetBinError(105,0.07284602);
   WeightMap_2750_3000->SetBinError(106,0.07924511);
   WeightMap_2750_3000->SetBinError(107,0.07801881);
   WeightMap_2750_3000->SetBinError(108,0.06119944);
   WeightMap_2750_3000->SetEntries(242.8694);
   WeightMap_2750_3000->SetStats(0);
   WeightMap_2750_3000->SetContour(20);
   WeightMap_2750_3000->SetContourLevel(0,0);
   WeightMap_2750_3000->SetContourLevel(1,0.0585208);
   WeightMap_2750_3000->SetContourLevel(2,0.1170416);
   WeightMap_2750_3000->SetContourLevel(3,0.1755624);
   WeightMap_2750_3000->SetContourLevel(4,0.2340832);
   WeightMap_2750_3000->SetContourLevel(5,0.292604);
   WeightMap_2750_3000->SetContourLevel(6,0.3511248);
   WeightMap_2750_3000->SetContourLevel(7,0.4096456);
   WeightMap_2750_3000->SetContourLevel(8,0.4681664);
   WeightMap_2750_3000->SetContourLevel(9,0.5266872);
   WeightMap_2750_3000->SetContourLevel(10,0.585208);
   WeightMap_2750_3000->SetContourLevel(11,0.6437288);
   WeightMap_2750_3000->SetContourLevel(12,0.7022496);
   WeightMap_2750_3000->SetContourLevel(13,0.7607704);
   WeightMap_2750_3000->SetContourLevel(14,0.8192912);
   WeightMap_2750_3000->SetContourLevel(15,0.877812);
   WeightMap_2750_3000->SetContourLevel(16,0.9363328);
   WeightMap_2750_3000->SetContourLevel(17,0.9948536);
   WeightMap_2750_3000->SetContourLevel(18,1.053374);
   WeightMap_2750_3000->SetContourLevel(19,1.111895);
   
   TPaletteAxis *palette = new TPaletteAxis(60.77922,-92.05945,67.79221,92.05945,WeightMap_2750_3000);
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
   WeightMap_2750_3000->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#000099");
   WeightMap_2750_3000->SetLineColor(ci);
   WeightMap_2750_3000->GetXaxis()->SetTitle("y [mm]");
   WeightMap_2750_3000->GetXaxis()->SetRange(1,12);
   WeightMap_2750_3000->GetXaxis()->CenterTitle(true);
   WeightMap_2750_3000->GetXaxis()->SetLabelFont(42);
   WeightMap_2750_3000->GetXaxis()->SetTitleSize(0.04);
   WeightMap_2750_3000->GetXaxis()->SetTitleOffset(1.1);
   WeightMap_2750_3000->GetXaxis()->SetTitleFont(42);
   WeightMap_2750_3000->GetYaxis()->SetTitle("#theta_{y} [mrad]");
   WeightMap_2750_3000->GetYaxis()->SetRange(1,48);
   WeightMap_2750_3000->GetYaxis()->CenterTitle(true);
   WeightMap_2750_3000->GetYaxis()->SetNdivisions(4000510);
   WeightMap_2750_3000->GetYaxis()->SetLabelFont(42);
   WeightMap_2750_3000->GetYaxis()->SetTitleSize(0.04);
   WeightMap_2750_3000->GetYaxis()->SetTitleOffset(1.1);
   WeightMap_2750_3000->GetYaxis()->SetTitleFont(42);
   WeightMap_2750_3000->GetZaxis()->CenterTitle(true);
   WeightMap_2750_3000->GetZaxis()->SetLabelFont(42);
   WeightMap_2750_3000->GetZaxis()->SetTitleOffset(1);
   WeightMap_2750_3000->GetZaxis()->SetTitleFont(42);
   WeightMap_2750_3000->Draw("COLZ TEXT");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
