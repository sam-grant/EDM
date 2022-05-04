void 35_40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__142 = new TH1D("h1_ratio__142","",630,-1575,1575);
   h1_ratio__142->SetBinContent(310,1e+09);
   h1_ratio__142->SetBinContent(311,1.392694);
   h1_ratio__142->SetBinContent(312,2.936971);
   h1_ratio__142->SetBinContent(313,2.856034);
   h1_ratio__142->SetBinContent(314,3.237078);
   h1_ratio__142->SetBinContent(315,4.528684);
   h1_ratio__142->SetBinContent(316,0.7546109);
   h1_ratio__142->SetBinError(311,0.6234777);
   h1_ratio__142->SetBinError(312,0.7599805);
   h1_ratio__142->SetBinError(313,0.6941626);
   h1_ratio__142->SetBinError(314,0.7080902);
   h1_ratio__142->SetBinError(315,0.8296063);
   h1_ratio__142->SetBinError(316,0.337662);
   h1_ratio__142->SetEntries(66.89324);
   h1_ratio__142->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__142->GetXaxis()->SetRange(296,335);
   h1_ratio__142->GetXaxis()->CenterTitle(true);
   h1_ratio__142->GetXaxis()->SetLabelFont(42);
   h1_ratio__142->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__142->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__142->GetXaxis()->SetTitleFont(42);
   h1_ratio__142->GetYaxis()->SetTitle("Tracks");
   h1_ratio__142->GetYaxis()->CenterTitle(true);
   h1_ratio__142->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__142->GetYaxis()->SetLabelFont(42);
   h1_ratio__142->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__142->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__142->GetYaxis()->SetTitleFont(42);
   h1_ratio__142->GetZaxis()->SetLabelFont(42);
   h1_ratio__142->GetZaxis()->SetTitleOffset(1);
   h1_ratio__142->GetZaxis()->SetTitleFont(42);
   h1_ratio__142->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
