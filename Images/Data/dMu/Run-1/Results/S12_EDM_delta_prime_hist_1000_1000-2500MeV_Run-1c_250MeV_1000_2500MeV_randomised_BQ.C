void S12_EDM_delta_prime_hist_1000_1000-2500MeV_Run-1c_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 13 18:32:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__7 = new TH1D("h__7","S12",33,0.3324564,0.6636567);
   h__7->SetBinContent(9,2);
   h__7->SetBinContent(10,5);
   h__7->SetBinContent(11,15);
   h__7->SetBinContent(12,30);
   h__7->SetBinContent(13,55);
   h__7->SetBinContent(14,62);
   h__7->SetBinContent(15,114);
   h__7->SetBinContent(16,97);
   h__7->SetBinContent(17,136);
   h__7->SetBinContent(18,130);
   h__7->SetBinContent(19,103);
   h__7->SetBinContent(20,72);
   h__7->SetBinContent(21,61);
   h__7->SetBinContent(22,48);
   h__7->SetBinContent(23,30);
   h__7->SetBinContent(24,20);
   h__7->SetBinContent(25,9);
   h__7->SetBinContent(26,5);
   h__7->SetBinContent(27,5);
   h__7->SetBinContent(29,1);
   h__7->SetEntries(1000);
   h__7->SetStats(0);
   h__7->SetLineWidth(3);
   h__7->GetXaxis()->SetTitle("#delta^{BLIND} [mrad]");
   h__7->GetXaxis()->CenterTitle(true);
   h__7->GetXaxis()->SetLabelFont(42);
   h__7->GetXaxis()->SetTitleSize(0.04);
   h__7->GetXaxis()->SetTitleOffset(1.1);
   h__7->GetXaxis()->SetTitleFont(42);
   h__7->GetYaxis()->SetTitle("Trials  / 0.01 [mrad]");
   h__7->GetYaxis()->CenterTitle(true);
   h__7->GetYaxis()->SetNdivisions(4000510);
   h__7->GetYaxis()->SetLabelFont(42);
   h__7->GetYaxis()->SetTitleSize(0.04);
   h__7->GetYaxis()->SetTitleOffset(1.1);
   h__7->GetYaxis()->SetTitleFont(42);
   h__7->GetZaxis()->SetLabelFont(42);
   h__7->GetZaxis()->SetTitleOffset(1);
   h__7->GetZaxis()->SetTitleFont(42);
   h__7->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   TText *pt_LaTex = pt->AddText("#LT#delta#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("0.5031
#pm0.001
");
   pt_LaTex = pt->AddText("0.0322
#pm0.0007
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
