void S12S18_EDM_delta_prime_hist_1000_1000-2500MeV_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 16:26:36 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__3 = new TH1D("h__3","S12S18",51,0.09954048,1.120874);
   h__3->SetBinContent(22,11);
   h__3->SetBinContent(23,66);
   h__3->SetBinContent(24,167);
   h__3->SetBinContent(25,277);
   h__3->SetBinContent(26,249);
   h__3->SetBinContent(27,138);
   h__3->SetBinContent(28,69);
   h__3->SetBinContent(29,17);
   h__3->SetBinContent(30,6);
   h__3->SetEntries(1000);
   h__3->SetStats(0);
   h__3->SetLineWidth(3);
   h__3->GetXaxis()->SetTitle("#delta (BLIND) [mrad]");
   h__3->GetXaxis()->CenterTitle(true);
   h__3->GetXaxis()->SetLabelFont(42);
   h__3->GetXaxis()->SetTitleSize(0.04);
   h__3->GetXaxis()->SetTitleOffset(1.1);
   h__3->GetXaxis()->SetTitleFont(42);
   h__3->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
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
   TText *pt_LaTex = pt->AddText("#LT#delta#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("0.6
#pm0.0009
");
   pt_LaTex = pt->AddText("0.029
#pm0.0006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
