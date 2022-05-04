void 25_30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__134 = new TH1D("h1_ratio__134","",630,-1575,1575);
   h1_ratio__134->SetBinContent(310,10);
   h1_ratio__134->SetBinContent(311,10.55638);
   h1_ratio__134->SetBinContent(312,12.03918);
   h1_ratio__134->SetBinContent(313,10.23729);
   h1_ratio__134->SetBinContent(314,8.880023);
   h1_ratio__134->SetBinContent(315,11.68864);
   h1_ratio__134->SetBinContent(316,11.63922);
   h1_ratio__134->SetBinContent(317,2.13653);
   h1_ratio__134->SetBinContent(318,1e+09);
   h1_ratio__134->SetBinError(310,3.169706);
   h1_ratio__134->SetBinError(311,1.716718);
   h1_ratio__134->SetBinError(312,1.545817);
   h1_ratio__134->SetBinError(313,1.313903);
   h1_ratio__134->SetBinError(314,1.168437);
   h1_ratio__134->SetBinError(315,1.318684);
   h1_ratio__134->SetBinError(316,1.313095);
   h1_ratio__134->SetBinError(317,0.5712985);
   h1_ratio__134->SetEntries(269.3425);
   h1_ratio__134->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__134->GetXaxis()->SetRange(296,335);
   h1_ratio__134->GetXaxis()->CenterTitle(true);
   h1_ratio__134->GetXaxis()->SetLabelFont(42);
   h1_ratio__134->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__134->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__134->GetXaxis()->SetTitleFont(42);
   h1_ratio__134->GetYaxis()->SetTitle("Tracks");
   h1_ratio__134->GetYaxis()->CenterTitle(true);
   h1_ratio__134->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__134->GetYaxis()->SetLabelFont(42);
   h1_ratio__134->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__134->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__134->GetYaxis()->SetTitleFont(42);
   h1_ratio__134->GetZaxis()->SetLabelFont(42);
   h1_ratio__134->GetZaxis()->SetTitleOffset(1);
   h1_ratio__134->GetZaxis()->SetTitleFont(42);
   h1_ratio__134->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
