void S18_EDM_delta_prime_hist_1000_750-2750MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:59:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__8 = new TH1D("h__8","S18",25,0.2149649,0.7295042);
   h__8->SetBinContent(9,1);
   h__8->SetBinContent(10,5);
   h__8->SetBinContent(11,32);
   h__8->SetBinContent(12,93);
   h__8->SetBinContent(13,177);
   h__8->SetBinContent(14,198);
   h__8->SetBinContent(15,198);
   h__8->SetBinContent(16,140);
   h__8->SetBinContent(17,85);
   h__8->SetBinContent(18,44);
   h__8->SetBinContent(19,14);
   h__8->SetBinContent(20,9);
   h__8->SetBinContent(21,3);
   h__8->SetBinContent(23,1);
   h__8->SetEntries(1000);
   h__8->SetStats(0);
   h__8->SetLineWidth(3);
   h__8->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__8->GetXaxis()->CenterTitle(true);
   h__8->GetXaxis()->SetLabelFont(42);
   h__8->GetXaxis()->SetTitleSize(0.04);
   h__8->GetXaxis()->SetTitleOffset(1.1);
   h__8->GetXaxis()->SetTitleFont(42);
   h__8->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__8->GetYaxis()->CenterTitle(true);
   h__8->GetYaxis()->SetNdivisions(4000510);
   h__8->GetYaxis()->SetLabelFont(42);
   h__8->GetYaxis()->SetTitleSize(0.04);
   h__8->GetYaxis()->SetTitleOffset(1.1);
   h__8->GetYaxis()->SetTitleFont(42);
   h__8->GetZaxis()->SetLabelFont(42);
   h__8->GetZaxis()->SetTitleOffset(1);
   h__8->GetZaxis()->SetTitleFont(42);
   h__8->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   TText *pt_LaTex = pt->AddText("#LT#delta'#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta'} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("0.5048
#pm0.001
");
   pt_LaTex = pt->AddText("0.039
#pm0.0009
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
