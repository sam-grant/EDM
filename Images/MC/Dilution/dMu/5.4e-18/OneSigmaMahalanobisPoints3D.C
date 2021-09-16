void OneSigmaMahalanobisPoints3D()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep 16 15:57:04 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH3D *hist3D__1 = new TH3D("hist3D__1","",27,-8.93e-08,-2.28e-08,27,5.25e-05,0.000272258,27,-0.113345,0.0541603);
   hist3D__1->SetBinContent(6476,1);
   hist3D__1->SetBinContent(6503,1);
   hist3D__1->SetBinContent(7288,1);
   hist3D__1->SetBinContent(7289,1);
   hist3D__1->SetBinContent(8129,1);
   hist3D__1->SetBinContent(8130,1);
   hist3D__1->SetBinContent(8941,1);
   hist3D__1->SetBinContent(9783,2);
   hist3D__1->SetBinContent(10541,2);
   hist3D__1->SetBinContent(11353,1);
   hist3D__1->SetBinContent(11382,1);
   hist3D__1->SetBinContent(13006,1);
   hist3D__1->SetBinContent(13035,1);
   hist3D__1->SetBinContent(13847,2);
   hist3D__1->SetBinContent(14605,2);
   hist3D__1->SetBinContent(15447,1);
   hist3D__1->SetBinContent(16258,1);
   hist3D__1->SetBinContent(16259,2);
   hist3D__1->SetBinContent(17099,1);
   hist3D__1->SetBinContent(17885,1);
   hist3D__1->SetBinContent(17912,1);
   hist3D__1->SetEntries(26);
   hist3D__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hist3D__1->SetFillColor(ci);
   hist3D__1->SetMarkerStyle(20);
   hist3D__1->GetXaxis()->SetTitle("a [MeV^{-2}]");
   hist3D__1->GetXaxis()->CenterTitle(true);
   hist3D__1->GetXaxis()->SetNdivisions(4000510);
   hist3D__1->GetXaxis()->SetLabelFont(42);
   hist3D__1->GetXaxis()->SetTitleSize(0.04);
   hist3D__1->GetXaxis()->SetTitleOffset(2);
   hist3D__1->GetXaxis()->SetTitleFont(42);
   hist3D__1->GetYaxis()->SetTitle("b [MeV^{-1}]");
   hist3D__1->GetYaxis()->CenterTitle(true);
   hist3D__1->GetYaxis()->SetNdivisions(4000510);
   hist3D__1->GetYaxis()->SetLabelFont(42);
   hist3D__1->GetYaxis()->SetTitleSize(0.04);
   hist3D__1->GetYaxis()->SetTitleOffset(2);
   hist3D__1->GetYaxis()->SetTitleFont(42);
   hist3D__1->GetZaxis()->SetTitle("d_{0}");
   hist3D__1->GetZaxis()->CenterTitle(true);
   hist3D__1->GetZaxis()->SetNdivisions(4000510);
   hist3D__1->GetZaxis()->SetLabelFont(42);
   hist3D__1->GetZaxis()->SetTitleSize(0.04);
   hist3D__1->GetZaxis()->SetTitleOffset(1.65);
   hist3D__1->GetZaxis()->SetTitleFont(42);
   hist3D__1->Draw("BOX");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
