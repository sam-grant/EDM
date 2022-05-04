void 15_20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__126 = new TH1D("h1_ratio__126","",630,-1575,1575);
   h1_ratio__126->SetBinContent(310,20);
   h1_ratio__126->SetBinContent(311,18.95507);
   h1_ratio__126->SetBinContent(312,28.22025);
   h1_ratio__126->SetBinContent(313,23.06544);
   h1_ratio__126->SetBinContent(314,25.89417);
   h1_ratio__126->SetBinContent(315,26.47032);
   h1_ratio__126->SetBinContent(316,26.7157);
   h1_ratio__126->SetBinContent(317,21.01583);
   h1_ratio__126->SetBinContent(318,7.559161);
   h1_ratio__126->SetBinContent(319,1e+09);
   h1_ratio__126->SetBinError(310,4.481213);
   h1_ratio__126->SetBinError(311,2.286312);
   h1_ratio__126->SetBinError(312,2.350273);
   h1_ratio__126->SetBinError(313,1.953948);
   h1_ratio__126->SetBinError(314,1.979599);
   h1_ratio__126->SetBinError(315,1.983797);
   h1_ratio__126->SetBinError(316,1.985666);
   h1_ratio__126->SetBinError(317,1.799333);
   h1_ratio__126->SetBinError(318,1.115393);
   h1_ratio__126->SetEntries(771.8449);
   h1_ratio__126->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__126->GetXaxis()->SetRange(296,335);
   h1_ratio__126->GetXaxis()->CenterTitle(true);
   h1_ratio__126->GetXaxis()->SetLabelFont(42);
   h1_ratio__126->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__126->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__126->GetXaxis()->SetTitleFont(42);
   h1_ratio__126->GetYaxis()->SetTitle("Tracks");
   h1_ratio__126->GetYaxis()->CenterTitle(true);
   h1_ratio__126->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__126->GetYaxis()->SetLabelFont(42);
   h1_ratio__126->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__126->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__126->GetYaxis()->SetTitleFont(42);
   h1_ratio__126->GetZaxis()->SetLabelFont(42);
   h1_ratio__126->GetZaxis()->SetTitleOffset(1);
   h1_ratio__126->GetZaxis()->SetTitleFont(42);
   h1_ratio__126->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
