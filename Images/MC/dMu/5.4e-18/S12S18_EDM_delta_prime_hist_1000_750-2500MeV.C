void S12S18_EDM_delta_prime_hist_1000_750-2500MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:25:53 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__4 = new TH1D("h__4","",59,0.9332207,2.121994);
   h__4->SetBinContent(20,1);
   h__4->SetBinContent(21,2);
   h__4->SetBinContent(22,3);
   h__4->SetBinContent(23,10);
   h__4->SetBinContent(24,23);
   h__4->SetBinContent(25,43);
   h__4->SetBinContent(26,53);
   h__4->SetBinContent(27,69);
   h__4->SetBinContent(28,91);
   h__4->SetBinContent(29,95);
   h__4->SetBinContent(30,123);
   h__4->SetBinContent(31,122);
   h__4->SetBinContent(32,93);
   h__4->SetBinContent(33,88);
   h__4->SetBinContent(34,61);
   h__4->SetBinContent(35,35);
   h__4->SetBinContent(36,31);
   h__4->SetBinContent(37,26);
   h__4->SetBinContent(38,10);
   h__4->SetBinContent(39,12);
   h__4->SetBinContent(40,4);
   h__4->SetBinContent(41,1);
   h__4->SetBinContent(42,1);
   h__4->SetBinContent(44,1);
   h__4->SetBinContent(45,1);
   h__4->SetBinContent(46,1);
   h__4->SetEntries(1000);
   h__4->SetStats(0);
   h__4->SetLineWidth(3);
   h__4->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__4->GetXaxis()->CenterTitle(true);
   h__4->GetXaxis()->SetLabelFont(42);
   h__4->GetXaxis()->SetTitleSize(0.04);
   h__4->GetXaxis()->SetTitleOffset(1.1);
   h__4->GetXaxis()->SetTitleFont(42);
   h__4->GetYaxis()->SetTitle("Trials");
   h__4->GetYaxis()->CenterTitle(true);
   h__4->GetYaxis()->SetNdivisions(4000510);
   h__4->GetYaxis()->SetLabelFont(42);
   h__4->GetYaxis()->SetTitleSize(0.04);
   h__4->GetYaxis()->SetTitleOffset(1.1);
   h__4->GetYaxis()->SetTitleFont(42);
   h__4->GetZaxis()->SetLabelFont(42);
   h__4->GetZaxis()->SetTitleOffset(1);
   h__4->GetZaxis()->SetTitleFont(42);
   h__4->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.538
#pm0.002
");
   pt_LaTex = pt->AddText("0.072
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
