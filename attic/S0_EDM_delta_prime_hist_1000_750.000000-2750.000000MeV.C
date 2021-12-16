void S0_EDM_delta_prime_hist_1000_750.000000-2750.000000MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:21:52 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__7 = new TH1D("h__7","",65,-2.436833,-1.136058);
   h__7->SetBinContent(16,1);
   h__7->SetBinContent(19,1);
   h__7->SetBinContent(21,1);
   h__7->SetBinContent(22,2);
   h__7->SetBinContent(23,1);
   h__7->SetBinContent(24,4);
   h__7->SetBinContent(25,7);
   h__7->SetBinContent(26,4);
   h__7->SetBinContent(27,15);
   h__7->SetBinContent(28,13);
   h__7->SetBinContent(29,18);
   h__7->SetBinContent(30,19);
   h__7->SetBinContent(31,26);
   h__7->SetBinContent(32,25);
   h__7->SetBinContent(33,46);
   h__7->SetBinContent(34,52);
   h__7->SetBinContent(35,59);
   h__7->SetBinContent(36,62);
   h__7->SetBinContent(37,81);
   h__7->SetBinContent(38,76);
   h__7->SetBinContent(39,88);
   h__7->SetBinContent(40,66);
   h__7->SetBinContent(41,73);
   h__7->SetBinContent(42,53);
   h__7->SetBinContent(43,42);
   h__7->SetBinContent(44,47);
   h__7->SetBinContent(45,33);
   h__7->SetBinContent(46,37);
   h__7->SetBinContent(47,17);
   h__7->SetBinContent(48,14);
   h__7->SetBinContent(49,8);
   h__7->SetBinContent(50,4);
   h__7->SetBinContent(51,3);
   h__7->SetBinContent(52,2);
   h__7->SetEntries(1000);
   h__7->SetStats(0);
   h__7->SetLineWidth(3);
   h__7->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__7->GetXaxis()->CenterTitle(true);
   h__7->GetXaxis()->SetLabelFont(42);
   h__7->GetXaxis()->SetTitleSize(0.04);
   h__7->GetXaxis()->SetTitleOffset(1.1);
   h__7->GetXaxis()->SetTitleFont(42);
   h__7->GetYaxis()->SetTitle("Trials");
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
   TText *pt_LaTex = pt->AddText("#LT#delta'#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta'} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("-1.684
#pm0.003
");
   pt_LaTex = pt->AddText("0.11
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
