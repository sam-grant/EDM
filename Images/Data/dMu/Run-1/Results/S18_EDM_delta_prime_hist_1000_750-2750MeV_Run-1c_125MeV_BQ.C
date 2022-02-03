void S18_EDM_delta_prime_hist_1000_750-2750MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 14:53:36 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__14 = new TH1D("h__14","S18",25,0.6204865,1.12052);
   h__14->SetBinContent(0,46);
   h__14->SetBinContent(1,4);
   h__14->SetBinContent(2,8);
   h__14->SetBinContent(3,12);
   h__14->SetBinContent(4,14);
   h__14->SetBinContent(5,13);
   h__14->SetBinContent(6,21);
   h__14->SetBinContent(7,28);
   h__14->SetBinContent(8,39);
   h__14->SetBinContent(9,37);
   h__14->SetBinContent(10,28);
   h__14->SetBinContent(11,38);
   h__14->SetBinContent(12,32);
   h__14->SetBinContent(13,33);
   h__14->SetBinContent(14,17);
   h__14->SetBinContent(15,23);
   h__14->SetBinContent(16,28);
   h__14->SetBinContent(17,21);
   h__14->SetBinContent(18,17);
   h__14->SetBinContent(19,16);
   h__14->SetBinContent(20,22);
   h__14->SetBinContent(21,14);
   h__14->SetBinContent(22,13);
   h__14->SetBinContent(23,9);
   h__14->SetBinContent(24,14);
   h__14->SetBinContent(25,10);
   h__14->SetBinContent(26,443);
   h__14->SetEntries(1000);
   h__14->SetStats(0);
   h__14->SetLineWidth(3);
   h__14->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__14->GetXaxis()->CenterTitle(true);
   h__14->GetXaxis()->SetLabelFont(42);
   h__14->GetXaxis()->SetTitleSize(0.04);
   h__14->GetXaxis()->SetTitleOffset(1.1);
   h__14->GetXaxis()->SetTitleFont(42);
   h__14->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__14->GetYaxis()->CenterTitle(true);
   h__14->GetYaxis()->SetNdivisions(4000510);
   h__14->GetYaxis()->SetLabelFont(42);
   h__14->GetYaxis()->SetTitleSize(0.04);
   h__14->GetYaxis()->SetTitleOffset(1.1);
   h__14->GetYaxis()->SetTitleFont(42);
   h__14->GetZaxis()->SetLabelFont(42);
   h__14->GetZaxis()->SetTitleOffset(1);
   h__14->GetZaxis()->SetTitleFont(42);
   h__14->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.8639
#pm0.005
");
   pt_LaTex = pt->AddText("0.12
#pm0.004
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
