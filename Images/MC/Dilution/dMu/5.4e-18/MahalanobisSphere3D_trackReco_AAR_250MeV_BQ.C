void MahalanobisSphere3D_trackReco_AAR_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep 16 18:46:04 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH3D *sphere3D__3 = new TH3D("sphere3D__3","",24,-1.2,1.2,24,-1.2,1.2,24,-1.2,1.2);
   sphere3D__3->SetBinContent(1703,1);
   sphere3D__3->SetBinContent(3523,1);
   sphere3D__3->SetBinContent(3723,1);
   sphere3D__3->SetBinContent(3738,1);
   sphere3D__3->SetBinContent(3913,1);
   sphere3D__3->SetBinContent(4921,1);
   sphere3D__3->SetBinContent(4932,1);
   sphere3D__3->SetBinContent(5207,1);
   sphere3D__3->SetBinContent(5218,1);
   sphere3D__3->SetBinContent(8853,1);
   sphere3D__3->SetBinContent(8923,1);
   sphere3D__3->SetBinContent(8938,1);
   sphere3D__3->SetBinContent(9128,1);
   sphere3D__3->SetBinContent(9149,1);
   sphere3D__3->SetBinContent(9313,1);
   sphere3D__3->SetBinContent(9328,1);
   sphere3D__3->SetBinContent(9399,1);
   sphere3D__3->SetBinContent(12357,1);
   sphere3D__3->SetBinContent(12368,1);
   sphere3D__3->SetBinContent(12643,1);
   sphere3D__3->SetBinContent(12654,1);
   sphere3D__3->SetBinContent(13663,1);
   sphere3D__3->SetBinContent(13863,1);
   sphere3D__3->SetBinContent(13878,1);
   sphere3D__3->SetBinContent(14053,1);
   sphere3D__3->SetBinContent(15899,1);
   sphere3D__3->SetEntries(26);
   sphere3D__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   sphere3D__3->SetFillColor(ci);
   sphere3D__3->SetMarkerStyle(20);
   sphere3D__3->GetXaxis()->SetTitle("#chi^{2}_{i}");
   sphere3D__3->GetXaxis()->CenterTitle(true);
   sphere3D__3->GetXaxis()->SetNdivisions(4000510);
   sphere3D__3->GetXaxis()->SetLabelFont(42);
   sphere3D__3->GetXaxis()->SetTitleSize(0.04);
   sphere3D__3->GetXaxis()->SetTitleOffset(2);
   sphere3D__3->GetXaxis()->SetTitleFont(42);
   sphere3D__3->GetYaxis()->SetTitle("#chi^{2}_{j}");
   sphere3D__3->GetYaxis()->CenterTitle(true);
   sphere3D__3->GetYaxis()->SetNdivisions(4000510);
   sphere3D__3->GetYaxis()->SetLabelFont(42);
   sphere3D__3->GetYaxis()->SetTitleSize(0.04);
   sphere3D__3->GetYaxis()->SetTitleOffset(2);
   sphere3D__3->GetYaxis()->SetTitleFont(42);
   sphere3D__3->GetZaxis()->SetTitle("#chi^{2}_{k}");
   sphere3D__3->GetZaxis()->CenterTitle(true);
   sphere3D__3->GetZaxis()->SetNdivisions(4000510);
   sphere3D__3->GetZaxis()->SetLabelFont(42);
   sphere3D__3->GetZaxis()->SetTitleSize(0.04);
   sphere3D__3->GetZaxis()->SetTitleOffset(1.65);
   sphere3D__3->GetZaxis()->SetTitleFont(42);
   sphere3D__3->Draw("BOX");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
