void S12_EDM_delta_prime_hist_1000_750.000000-2750.000000MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:21:53 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__8 = new TH1D("h__8","",60,-1.826646,-0.6151648);
   h__8->SetBinContent(19,1);
   h__8->SetBinContent(21,1);
   h__8->SetBinContent(22,1);
   h__8->SetBinContent(23,2);
   h__8->SetBinContent(24,2);
   h__8->SetBinContent(25,10);
   h__8->SetBinContent(26,9);
   h__8->SetBinContent(27,21);
   h__8->SetBinContent(28,26);
   h__8->SetBinContent(29,28);
   h__8->SetBinContent(30,52);
   h__8->SetBinContent(31,67);
   h__8->SetBinContent(32,77);
   h__8->SetBinContent(33,101);
   h__8->SetBinContent(34,119);
   h__8->SetBinContent(35,117);
   h__8->SetBinContent(36,103);
   h__8->SetBinContent(37,74);
   h__8->SetBinContent(38,61);
   h__8->SetBinContent(39,57);
   h__8->SetBinContent(40,37);
   h__8->SetBinContent(41,18);
   h__8->SetBinContent(42,11);
   h__8->SetBinContent(43,3);
   h__8->SetBinContent(44,2);
   h__8->SetEntries(1000);
   h__8->SetStats(0);
   h__8->SetLineWidth(3);
   h__8->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__8->GetXaxis()->CenterTitle(true);
   h__8->GetXaxis()->SetLabelFont(42);
   h__8->GetXaxis()->SetTitleSize(0.04);
   h__8->GetXaxis()->SetTitleOffset(1.1);
   h__8->GetXaxis()->SetTitleFont(42);
   h__8->GetYaxis()->SetTitle("Trials");
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
   pt_LaTex = pt->AddText("-1.146
#pm0.002
");
   pt_LaTex = pt->AddText("0.075
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
