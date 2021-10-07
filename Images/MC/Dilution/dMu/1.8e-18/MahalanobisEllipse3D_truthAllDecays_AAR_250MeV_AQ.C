void MahalanobisEllipse3D_truthAllDecays_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  6 11:24:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH3D *ellipse3D__1 = new TH3D("ellipse3D__1","",27,-8.93e-08,-2.28e-08,27,5.25e-05,0.000272258,27,-0.113345,0.0541603);
   ellipse3D__1->SetBinContent(23571,1);
   ellipse3D__1->SetBinContent(23573,4);
   ellipse3D__1->SetBinContent(23574,4);
   ellipse3D__1->SetBinContent(23576,17);
   ellipse3D__1->SetEntries(26);
   ellipse3D__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   ellipse3D__1->SetFillColor(ci);
   ellipse3D__1->SetMarkerStyle(20);
   ellipse3D__1->GetXaxis()->SetTitle("a [MeV^{-2}]");
   ellipse3D__1->GetXaxis()->CenterTitle(true);
   ellipse3D__1->GetXaxis()->SetNdivisions(4000510);
   ellipse3D__1->GetXaxis()->SetLabelFont(42);
   ellipse3D__1->GetXaxis()->SetTitleSize(0.04);
   ellipse3D__1->GetXaxis()->SetTitleOffset(2);
   ellipse3D__1->GetXaxis()->SetTitleFont(42);
   ellipse3D__1->GetYaxis()->SetTitle("b [MeV^{-1}]");
   ellipse3D__1->GetYaxis()->CenterTitle(true);
   ellipse3D__1->GetYaxis()->SetNdivisions(4000510);
   ellipse3D__1->GetYaxis()->SetLabelFont(42);
   ellipse3D__1->GetYaxis()->SetTitleSize(0.04);
   ellipse3D__1->GetYaxis()->SetTitleOffset(2);
   ellipse3D__1->GetYaxis()->SetTitleFont(42);
   ellipse3D__1->GetZaxis()->SetTitle("d_{0}");
   ellipse3D__1->GetZaxis()->CenterTitle(true);
   ellipse3D__1->GetZaxis()->SetNdivisions(4000510);
   ellipse3D__1->GetZaxis()->SetLabelFont(42);
   ellipse3D__1->GetZaxis()->SetTitleSize(0.04);
   ellipse3D__1->GetZaxis()->SetTitleOffset(1.65);
   ellipse3D__1->GetZaxis()->SetTitleFont(42);
   ellipse3D__1->Draw("");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
