void S12_EDM_delta_prime_hist_1000_1000-2500MeV_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 16:26:35 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__1 = new TH1D("h__1","S12",51,0.03686888,1.072505);
   h__1->SetBinContent(22,7);
   h__1->SetBinContent(23,44);
   h__1->SetBinContent(24,103);
   h__1->SetBinContent(25,195);
   h__1->SetBinContent(26,239);
   h__1->SetBinContent(27,188);
   h__1->SetBinContent(28,119);
   h__1->SetBinContent(29,65);
   h__1->SetBinContent(30,28);
   h__1->SetBinContent(31,10);
   h__1->SetBinContent(32,1);
   h__1->SetBinContent(33,1);
   h__1->SetEntries(1000);
   h__1->SetStats(0);
   h__1->SetLineWidth(3);
   h__1->GetXaxis()->SetTitle("#delta (BLIND) [mrad]");
   h__1->GetXaxis()->CenterTitle(true);
   h__1->GetXaxis()->SetLabelFont(42);
   h__1->GetXaxis()->SetTitleSize(0.04);
   h__1->GetXaxis()->SetTitleOffset(1.1);
   h__1->GetXaxis()->SetTitleFont(42);
   h__1->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
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
   pt_LaTex = pt->AddText("0.5596
#pm0.001
");
   pt_LaTex = pt->AddText("0.036
#pm0.0008
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
