void 10_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__122 = new TH1D("h1_ratio__122","",630,-1575,1575);
   h1_ratio__122->SetBinContent(310,0.03703704);
   h1_ratio__122->SetBinContent(311,0.0765154);
   h1_ratio__122->SetBinContent(312,0.1097463);
   h1_ratio__122->SetBinContent(313,0.1050563);
   h1_ratio__122->SetBinContent(314,0.118022);
   h1_ratio__122->SetBinContent(315,0.1007486);
   h1_ratio__122->SetBinContent(316,0.1089229);
   h1_ratio__122->SetBinContent(317,0.1055216);
   h1_ratio__122->SetBinContent(318,0.05693722);
   h1_ratio__122->SetBinContent(319,0.006468686);
   h1_ratio__122->SetBinError(310,0.01117648);
   h1_ratio__122->SetBinError(311,0.00836302);
   h1_ratio__122->SetBinError(312,0.008364639);
   h1_ratio__122->SetBinError(313,0.007599869);
   h1_ratio__122->SetBinError(314,0.007736004);
   h1_ratio__122->SetBinError(315,0.007001633);
   h1_ratio__122->SetBinError(316,0.007279479);
   h1_ratio__122->SetBinError(317,0.007281806);
   h1_ratio__122->SetBinError(318,0.005563689);
   h1_ratio__122->SetBinError(319,0.002045879);
   h1_ratio__122->SetEntries(1188.58);
   h1_ratio__122->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__122->GetXaxis()->SetRange(296,335);
   h1_ratio__122->GetXaxis()->CenterTitle(true);
   h1_ratio__122->GetXaxis()->SetLabelFont(42);
   h1_ratio__122->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__122->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__122->GetXaxis()->SetTitleFont(42);
   h1_ratio__122->GetYaxis()->SetTitle("Tracks");
   h1_ratio__122->GetYaxis()->CenterTitle(true);
   h1_ratio__122->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__122->GetYaxis()->SetLabelFont(42);
   h1_ratio__122->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__122->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__122->GetYaxis()->SetTitleFont(42);
   h1_ratio__122->GetZaxis()->SetLabelFont(42);
   h1_ratio__122->GetZaxis()->SetTitleOffset(1);
   h1_ratio__122->GetZaxis()->SetTitleFont(42);
   h1_ratio__122->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
