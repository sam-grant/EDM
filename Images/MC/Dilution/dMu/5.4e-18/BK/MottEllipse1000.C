void MottEllipse1000()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  2 13:56:42 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH3D *ellipse3D__2 = new TH3D("ellipse3D__2","",100,-1.2,1.2,27,-1.2,1.2,27,-1.1,1.2);
   ellipse3D__2->SetBinContent(39932,1000);
   ellipse3D__2->SetEntries(1000);
   ellipse3D__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   ellipse3D__2->SetFillColor(ci);
   ellipse3D__2->SetMarkerStyle(20);
   ellipse3D__2->GetXaxis()->SetTitle("a [MeV^{-2}]");
   ellipse3D__2->GetXaxis()->SetRange(1,100);
   ellipse3D__2->GetXaxis()->CenterTitle(true);
   ellipse3D__2->GetXaxis()->SetNdivisions(4000510);
   ellipse3D__2->GetXaxis()->SetLabelFont(42);
   ellipse3D__2->GetXaxis()->SetTitleSize(0.04);
   ellipse3D__2->GetXaxis()->SetTitleOffset(2);
   ellipse3D__2->GetXaxis()->SetTitleFont(42);
   ellipse3D__2->GetYaxis()->SetTitle("b [MeV^{-1}]");
   ellipse3D__2->GetYaxis()->SetRange(1,27);
   ellipse3D__2->GetYaxis()->CenterTitle(true);
   ellipse3D__2->GetYaxis()->SetNdivisions(4000510);
   ellipse3D__2->GetYaxis()->SetLabelFont(42);
   ellipse3D__2->GetYaxis()->SetTitleSize(0.04);
   ellipse3D__2->GetYaxis()->SetTitleOffset(2);
   ellipse3D__2->GetYaxis()->SetTitleFont(42);
   ellipse3D__2->GetZaxis()->SetTitle("d_{0}");
   ellipse3D__2->GetZaxis()->SetRange(1,27);
   ellipse3D__2->GetZaxis()->CenterTitle(true);
   ellipse3D__2->GetZaxis()->SetNdivisions(4000510);
   ellipse3D__2->GetZaxis()->SetLabelFont(42);
   ellipse3D__2->GetZaxis()->SetTitleSize(0.04);
   ellipse3D__2->GetZaxis()->SetTitleOffset(1.65);
   ellipse3D__2->GetZaxis()->SetTitleFont(42);
   ellipse3D__2->Draw("");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
