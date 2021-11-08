void S12_EDM_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 26 00:47:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__1 = new TH1D("h__1","",53,0.02483493,1.097581);
   h__1->SetBinContent(23,1);
   h__1->SetBinContent(24,1);
   h__1->SetBinContent(25,25);
   h__1->SetBinContent(26,108);
   h__1->SetBinContent(27,228);
   h__1->SetBinContent(28,302);
   h__1->SetBinContent(29,205);
   h__1->SetBinContent(30,88);
   h__1->SetBinContent(31,30);
   h__1->SetBinContent(32,8);
   h__1->SetBinContent(33,4);
   h__1->SetEntries(1000);
   h__1->SetStats(0);
   h__1->SetLineWidth(3);
   h__1->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
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
   pt_LaTex = pt->AddText("0.5815
#pm0.0009
");
   pt_LaTex = pt->AddText("0.028
#pm0.0006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
