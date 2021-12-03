void S18_EDM_delta_prime_hist_1000_750-2750MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:46:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__3 = new TH1D("h__3","",58,0.8850088,2.059206);
   h__3->SetBinContent(20,3);
   h__3->SetBinContent(21,2);
   h__3->SetBinContent(22,5);
   h__3->SetBinContent(23,13);
   h__3->SetBinContent(24,37);
   h__3->SetBinContent(25,52);
   h__3->SetBinContent(26,74);
   h__3->SetBinContent(27,74);
   h__3->SetBinContent(28,93);
   h__3->SetBinContent(29,122);
   h__3->SetBinContent(30,122);
   h__3->SetBinContent(31,111);
   h__3->SetBinContent(32,85);
   h__3->SetBinContent(33,78);
   h__3->SetBinContent(34,39);
   h__3->SetBinContent(35,28);
   h__3->SetBinContent(36,28);
   h__3->SetBinContent(37,13);
   h__3->SetBinContent(38,13);
   h__3->SetBinContent(39,4);
   h__3->SetBinContent(41,1);
   h__3->SetBinContent(43,1);
   h__3->SetBinContent(44,2);
   h__3->SetEntries(1000);
   h__3->SetStats(0);
   h__3->SetLineWidth(3);
   h__3->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__3->GetXaxis()->CenterTitle(true);
   h__3->GetXaxis()->SetLabelFont(42);
   h__3->GetXaxis()->SetTitleSize(0.04);
   h__3->GetXaxis()->SetTitleOffset(1.1);
   h__3->GetXaxis()->SetTitleFont(42);
   h__3->GetYaxis()->SetTitle("Trials");
   h__3->GetYaxis()->CenterTitle(true);
   h__3->GetYaxis()->SetNdivisions(4000510);
   h__3->GetYaxis()->SetLabelFont(42);
   h__3->GetYaxis()->SetTitleSize(0.04);
   h__3->GetYaxis()->SetTitleOffset(1.1);
   h__3->GetYaxis()->SetTitleFont(42);
   h__3->GetZaxis()->SetLabelFont(42);
   h__3->GetZaxis()->SetTitleOffset(1);
   h__3->GetZaxis()->SetTitleFont(42);
   h__3->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.477
#pm0.002
");
   pt_LaTex = pt->AddText("0.071
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
