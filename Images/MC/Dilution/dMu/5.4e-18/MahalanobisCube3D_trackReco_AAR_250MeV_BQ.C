void MahalanobisCube3D_trackReco_AAR_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 12 13:07:00 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH3D *cube3D__2 = new TH3D("cube3D__2","",24,-1.2,1.2,24,-1.2,1.2,24,-1.2,1.2);
   cube3D__2->SetBinContent(1406,1);
   cube3D__2->SetBinContent(1417,1);
   cube3D__2->SetBinContent(1427,1);
   cube3D__2->SetBinContent(1692,1);
   cube3D__2->SetBinContent(1703,1);
   cube3D__2->SetBinContent(1713,1);
   cube3D__2->SetBinContent(1952,1);
   cube3D__2->SetBinContent(1963,1);
   cube3D__2->SetBinContent(1973,1);
   cube3D__2->SetBinContent(8842,1);
   cube3D__2->SetBinContent(8853,1);
   cube3D__2->SetBinContent(8863,1);
   cube3D__2->SetBinContent(9128,1);
   cube3D__2->SetBinContent(9149,1);
   cube3D__2->SetBinContent(9388,1);
   cube3D__2->SetBinContent(9399,1);
   cube3D__2->SetBinContent(9409,1);
   cube3D__2->SetBinContent(15602,1);
   cube3D__2->SetBinContent(15613,1);
   cube3D__2->SetBinContent(15623,1);
   cube3D__2->SetBinContent(15888,1);
   cube3D__2->SetBinContent(15899,1);
   cube3D__2->SetBinContent(15909,1);
   cube3D__2->SetBinContent(16148,1);
   cube3D__2->SetBinContent(16159,1);
   cube3D__2->SetBinContent(16169,1);
   cube3D__2->SetEntries(26);
   cube3D__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   cube3D__2->SetFillColor(ci);
   cube3D__2->SetMarkerStyle(20);
   cube3D__2->GetXaxis()->SetTitle("i");
   cube3D__2->GetXaxis()->CenterTitle(true);
   cube3D__2->GetXaxis()->SetNdivisions(4000510);
   cube3D__2->GetXaxis()->SetLabelFont(42);
   cube3D__2->GetXaxis()->SetTitleSize(0.04);
   cube3D__2->GetXaxis()->SetTitleOffset(2);
   cube3D__2->GetXaxis()->SetTitleFont(42);
   cube3D__2->GetYaxis()->SetTitle("j");
   cube3D__2->GetYaxis()->CenterTitle(true);
   cube3D__2->GetYaxis()->SetNdivisions(4000510);
   cube3D__2->GetYaxis()->SetLabelFont(42);
   cube3D__2->GetYaxis()->SetTitleSize(0.04);
   cube3D__2->GetYaxis()->SetTitleOffset(2);
   cube3D__2->GetYaxis()->SetTitleFont(42);
   cube3D__2->GetZaxis()->SetTitle("k");
   cube3D__2->GetZaxis()->CenterTitle(true);
   cube3D__2->GetZaxis()->SetNdivisions(4000510);
   cube3D__2->GetZaxis()->SetLabelFont(42);
   cube3D__2->GetZaxis()->SetTitleSize(0.04);
   cube3D__2->GetZaxis()->SetTitleOffset(1.65);
   cube3D__2->GetZaxis()->SetTitleFont(42);
   cube3D__2->Draw("");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
