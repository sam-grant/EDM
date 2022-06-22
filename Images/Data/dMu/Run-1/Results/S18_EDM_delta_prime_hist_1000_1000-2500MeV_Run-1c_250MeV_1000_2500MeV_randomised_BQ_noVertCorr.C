void S18_EDM_delta_prime_hist_1000_1000-2500MeV_Run-1c_250MeV_1000_2500MeV_randomised_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 16:29:58 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__2 = new TH1D("h__2","S18",51,-0.03632264,1.002378);
   h__2->SetBinContent(20,3);
   h__2->SetBinContent(21,18);
   h__2->SetBinContent(22,66);
   h__2->SetBinContent(23,146);
   h__2->SetBinContent(24,221);
   h__2->SetBinContent(25,224);
   h__2->SetBinContent(26,167);
   h__2->SetBinContent(27,91);
   h__2->SetBinContent(28,40);
   h__2->SetBinContent(29,20);
   h__2->SetBinContent(30,3);
   h__2->SetBinContent(31,1);
   h__2->SetEntries(1000);
   h__2->SetStats(0);
   h__2->SetLineWidth(3);
   h__2->GetXaxis()->SetTitle("#delta^{BLIND} [mrad]");
   h__2->GetXaxis()->CenterTitle(true);
   h__2->GetXaxis()->SetLabelFont(42);
   h__2->GetXaxis()->SetTitleSize(0.04);
   h__2->GetXaxis()->SetTitleOffset(1.1);
   h__2->GetXaxis()->SetTitleFont(42);
   h__2->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
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
   TText *pt_LaTex = pt->AddText("#LT#delta#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("0.458
#pm0.001
");
   pt_LaTex = pt->AddText("0.035
#pm0.0008
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
