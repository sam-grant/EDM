#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S12_EDM_delta_prime_hist_1000_1000-2500MeV_Run-1a_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 11 15:36:04 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__1 = new TH1D("h__1","S12",30,0.3008365,0.6087066);
   h__1->SetBinContent(8,2);
   h__1->SetBinContent(9,4);
   h__1->SetBinContent(10,16);
   h__1->SetBinContent(11,33);
   h__1->SetBinContent(12,64);
   h__1->SetBinContent(13,103);
   h__1->SetBinContent(14,153);
   h__1->SetBinContent(15,147);
   h__1->SetBinContent(16,146);
   h__1->SetBinContent(17,139);
   h__1->SetBinContent(18,91);
   h__1->SetBinContent(19,55);
   h__1->SetBinContent(20,23);
   h__1->SetBinContent(21,13);
   h__1->SetBinContent(22,7);
   h__1->SetBinContent(24,1);
   h__1->SetBinContent(25,3);
   h__1->SetEntries(1000);
   h__1->SetStats(0);
   h__1->SetLineWidth(3);
   h__1->GetXaxis()->SetTitle("#delta^{BLIND} [mrad]");
   h__1->GetXaxis()->CenterTitle(true);
   h__1->GetXaxis()->SetLabelFont(42);
   h__1->GetXaxis()->SetTitleSize(0.04);
   h__1->GetXaxis()->SetTitleOffset(1.1);
   h__1->GetXaxis()->SetTitleFont(42);
   h__1->GetYaxis()->SetTitle("Trials  / 0.01 [mrad]");
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
   TText *pt_LaTex = pt->AddText("#LT#delta#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("0.4538
#pm0.0008
");
   pt_LaTex = pt->AddText("0.0256
#pm0.0006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
