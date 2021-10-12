void DeltaPrimeHist_trackReco_AAR_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 11 15:29:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__1 = new TH1D("h__1","",58,1.444403,2.615615);
   h__1->SetBinContent(14,1);
   h__1->SetBinContent(18,1);
   h__1->SetBinContent(19,2);
   h__1->SetBinContent(20,1);
   h__1->SetBinContent(21,3);
   h__1->SetBinContent(22,10);
   h__1->SetBinContent(23,11);
   h__1->SetBinContent(24,18);
   h__1->SetBinContent(25,31);
   h__1->SetBinContent(26,43);
   h__1->SetBinContent(27,39);
   h__1->SetBinContent(28,46);
   h__1->SetBinContent(29,62);
   h__1->SetBinContent(30,63);
   h__1->SetBinContent(31,86);
   h__1->SetBinContent(32,74);
   h__1->SetBinContent(33,84);
   h__1->SetBinContent(34,93);
   h__1->SetBinContent(35,75);
   h__1->SetBinContent(36,57);
   h__1->SetBinContent(37,39);
   h__1->SetBinContent(38,34);
   h__1->SetBinContent(39,29);
   h__1->SetBinContent(40,27);
   h__1->SetBinContent(41,19);
   h__1->SetBinContent(42,14);
   h__1->SetBinContent(43,12);
   h__1->SetBinContent(44,7);
   h__1->SetBinContent(45,6);
   h__1->SetBinContent(46,6);
   h__1->SetBinContent(47,3);
   h__1->SetBinContent(49,2);
   h__1->SetBinContent(51,1);
   h__1->SetBinContent(54,1);
   h__1->SetEntries(1000);
   h__1->SetStats(0);
   h__1->SetLineWidth(3);
   h__1->GetXaxis()->SetTitle("#delta' [mrad]");
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
   pt_LaTex = pt->AddText("2.094
#pm0.003
");
   pt_LaTex = pt->AddText("0.1
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
