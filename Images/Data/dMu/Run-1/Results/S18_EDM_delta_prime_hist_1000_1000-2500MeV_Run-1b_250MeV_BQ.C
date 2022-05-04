void S18_EDM_delta_prime_hist_1000_1000-2500MeV_Run-1b_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 19:41:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__5 = new TH1D("h__5","S18",50,-0.08742671,0.9188611);
   h__5->SetBinContent(19,1);
   h__5->SetBinContent(20,7);
   h__5->SetBinContent(21,42);
   h__5->SetBinContent(22,115);
   h__5->SetBinContent(23,224);
   h__5->SetBinContent(24,251);
   h__5->SetBinContent(25,203);
   h__5->SetBinContent(26,90);
   h__5->SetBinContent(27,53);
   h__5->SetBinContent(28,8);
   h__5->SetBinContent(29,2);
   h__5->SetBinContent(30,3);
   h__5->SetBinContent(31,1);
   h__5->SetEntries(1000);
   h__5->SetStats(0);
   h__5->SetLineWidth(3);
   h__5->GetXaxis()->SetTitle("#delta (BLIND) [mrad]");
   h__5->GetXaxis()->CenterTitle(true);
   h__5->GetXaxis()->SetLabelFont(42);
   h__5->GetXaxis()->SetTitleSize(0.04);
   h__5->GetXaxis()->SetTitleOffset(1.1);
   h__5->GetXaxis()->SetTitleFont(42);
   h__5->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__5->GetYaxis()->CenterTitle(true);
   h__5->GetYaxis()->SetNdivisions(4000510);
   h__5->GetYaxis()->SetLabelFont(42);
   h__5->GetYaxis()->SetTitleSize(0.04);
   h__5->GetYaxis()->SetTitleOffset(1.1);
   h__5->GetYaxis()->SetTitleFont(42);
   h__5->GetZaxis()->SetLabelFont(42);
   h__5->GetZaxis()->SetTitleOffset(1);
   h__5->GetZaxis()->SetTitleFont(42);
   h__5->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.3858
#pm0.001
");
   pt_LaTex = pt->AddText("0.032
#pm0.0007
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
