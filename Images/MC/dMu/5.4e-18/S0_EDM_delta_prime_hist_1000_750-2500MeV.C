void S0_EDM_delta_prime_hist_1000_750-2500MeV()
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
   
   TH1D *h__1 = new TH1D("h__1","",61,1.248796,2.483169);
   h__1->SetBinContent(19,1);
   h__1->SetBinContent(20,1);
   h__1->SetBinContent(21,2);
   h__1->SetBinContent(22,2);
   h__1->SetBinContent(23,9);
   h__1->SetBinContent(24,14);
   h__1->SetBinContent(25,33);
   h__1->SetBinContent(26,36);
   h__1->SetBinContent(27,49);
   h__1->SetBinContent(28,61);
   h__1->SetBinContent(29,79);
   h__1->SetBinContent(30,80);
   h__1->SetBinContent(31,87);
   h__1->SetBinContent(32,107);
   h__1->SetBinContent(33,95);
   h__1->SetBinContent(34,78);
   h__1->SetBinContent(35,72);
   h__1->SetBinContent(36,48);
   h__1->SetBinContent(37,38);
   h__1->SetBinContent(38,31);
   h__1->SetBinContent(39,28);
   h__1->SetBinContent(40,17);
   h__1->SetBinContent(41,11);
   h__1->SetBinContent(42,9);
   h__1->SetBinContent(43,6);
   h__1->SetBinContent(44,1);
   h__1->SetBinContent(45,1);
   h__1->SetBinContent(47,1);
   h__1->SetBinContent(48,1);
   h__1->SetBinContent(50,1);
   h__1->SetBinContent(51,1);
   h__1->SetEntries(1000);
   h__1->SetStats(0);
   h__1->SetLineWidth(3);
   h__1->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__1->GetXaxis()->CenterTitle(true);
   h__1->GetXaxis()->SetLabelFont(42);
   h__1->GetXaxis()->SetTitleSize(0.04);
   h__1->GetXaxis()->SetTitleOffset(1.1);
   h__1->GetXaxis()->SetTitleFont(42);
   h__1->GetYaxis()->SetTitle("Trials");
   h__1->GetYaxis()->CenterTitle(true);
   h__1->GetYaxis()->SetNdivisions(4000510);
   h__1->GetYaxis()->SetLabelFont(42);
   h__1->GetYaxis()->SetTitleSize(0.04);
   h__1->GetYaxis()->SetTitleOffset(1.1);
   h__1->GetYaxis()->SetTitleFont(42);
   h__1->GetZaxis()->SetLabelFont(42);
   h__1->GetZaxis()->SetTitleOffset(1);
   h__1->GetZaxis()->SetTitleFont(42);
   h__1->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.887
#pm0.003
");
   pt_LaTex = pt->AddText("0.088
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
