void S12_EDM_delta_prime_hist_1000_750-2500MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:25:52 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__2 = new TH1D("h__2","",59,1.065375,2.261242);
   h__2->SetBinContent(19,1);
   h__2->SetBinContent(20,1);
   h__2->SetBinContent(21,1);
   h__2->SetBinContent(22,5);
   h__2->SetBinContent(23,8);
   h__2->SetBinContent(24,21);
   h__2->SetBinContent(25,38);
   h__2->SetBinContent(26,56);
   h__2->SetBinContent(27,52);
   h__2->SetBinContent(28,80);
   h__2->SetBinContent(29,86);
   h__2->SetBinContent(30,103);
   h__2->SetBinContent(31,114);
   h__2->SetBinContent(32,110);
   h__2->SetBinContent(33,78);
   h__2->SetBinContent(34,77);
   h__2->SetBinContent(35,48);
   h__2->SetBinContent(36,37);
   h__2->SetBinContent(37,25);
   h__2->SetBinContent(38,24);
   h__2->SetBinContent(39,12);
   h__2->SetBinContent(40,10);
   h__2->SetBinContent(41,7);
   h__2->SetBinContent(42,2);
   h__2->SetBinContent(44,1);
   h__2->SetBinContent(46,1);
   h__2->SetBinContent(47,2);
   h__2->SetEntries(1000);
   h__2->SetStats(0);
   h__2->SetLineWidth(3);
   h__2->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__2->GetXaxis()->CenterTitle(true);
   h__2->GetXaxis()->SetLabelFont(42);
   h__2->GetXaxis()->SetTitleSize(0.04);
   h__2->GetXaxis()->SetTitleOffset(1.1);
   h__2->GetXaxis()->SetTitleFont(42);
   h__2->GetYaxis()->SetTitle("Trials");
   h__2->GetYaxis()->CenterTitle(true);
   h__2->GetYaxis()->SetNdivisions(4000510);
   h__2->GetYaxis()->SetLabelFont(42);
   h__2->GetYaxis()->SetTitleSize(0.04);
   h__2->GetYaxis()->SetTitleOffset(1.1);
   h__2->GetYaxis()->SetTitleFont(42);
   h__2->GetZaxis()->SetLabelFont(42);
   h__2->GetZaxis()->SetTitleOffset(1);
   h__2->GetZaxis()->SetTitleFont(42);
   h__2->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.684
#pm0.003
");
   pt_LaTex = pt->AddText("0.079
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
