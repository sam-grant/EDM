void S12S18_EDM_delta_prime_hist_1000_1000-2500MeV_Run-1b_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 19:41:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__6 = new TH1D("h__6","S12S18",50,-0.1444451,0.8624199);
   h__6->SetBinContent(22,1);
   h__6->SetBinContent(23,45);
   h__6->SetBinContent(24,258);
   h__6->SetBinContent(25,418);
   h__6->SetBinContent(26,222);
   h__6->SetBinContent(27,48);
   h__6->SetBinContent(28,6);
   h__6->SetBinContent(29,2);
   h__6->SetEntries(1000);
   h__6->SetStats(0);
   h__6->SetLineWidth(3);
   h__6->GetXaxis()->SetTitle("#delta (BLIND) [mrad]");
   h__6->GetXaxis()->CenterTitle(true);
   h__6->GetXaxis()->SetLabelFont(42);
   h__6->GetXaxis()->SetTitleSize(0.04);
   h__6->GetXaxis()->SetTitleOffset(1.1);
   h__6->GetXaxis()->SetTitleFont(42);
   h__6->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__6->GetYaxis()->CenterTitle(true);
   h__6->GetYaxis()->SetNdivisions(4000510);
   h__6->GetYaxis()->SetLabelFont(42);
   h__6->GetYaxis()->SetTitleSize(0.04);
   h__6->GetYaxis()->SetTitleOffset(1.1);
   h__6->GetYaxis()->SetTitleFont(42);
   h__6->GetZaxis()->SetLabelFont(42);
   h__6->GetZaxis()->SetTitleOffset(1);
   h__6->GetZaxis()->SetTitleFont(42);
   h__6->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.3487
#pm0.0006
");
   pt_LaTex = pt->AddText("0.019
#pm0.0004
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
