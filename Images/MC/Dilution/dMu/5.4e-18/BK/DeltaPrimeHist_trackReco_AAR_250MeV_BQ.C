void DeltaPrimeHist_trackReco_AAR_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 12 13:07:08 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__6 = new TH1D("h__6","",60,1.062587,2.274718);
   h__6->SetBinContent(19,1);
   h__6->SetBinContent(21,1);
   h__6->SetBinContent(22,4);
   h__6->SetBinContent(23,6);
   h__6->SetBinContent(24,10);
   h__6->SetBinContent(25,32);
   h__6->SetBinContent(26,36);
   h__6->SetBinContent(27,53);
   h__6->SetBinContent(28,73);
   h__6->SetBinContent(29,87);
   h__6->SetBinContent(30,87);
   h__6->SetBinContent(31,99);
   h__6->SetBinContent(32,113);
   h__6->SetBinContent(33,100);
   h__6->SetBinContent(34,76);
   h__6->SetBinContent(35,67);
   h__6->SetBinContent(36,39);
   h__6->SetBinContent(37,35);
   h__6->SetBinContent(38,32);
   h__6->SetBinContent(39,22);
   h__6->SetBinContent(40,9);
   h__6->SetBinContent(41,9);
   h__6->SetBinContent(42,3);
   h__6->SetBinContent(43,2);
   h__6->SetBinContent(45,1);
   h__6->SetBinContent(47,1);
   h__6->SetBinContent(48,2);
   h__6->SetEntries(1000);
   h__6->SetStats(0);
   h__6->SetLineWidth(3);
   h__6->GetXaxis()->SetTitle("#delta' [mrad]");
   h__6->GetXaxis()->CenterTitle(true);
   h__6->GetXaxis()->SetLabelFont(42);
   h__6->GetXaxis()->SetTitleSize(0.04);
   h__6->GetXaxis()->SetTitleOffset(1.1);
   h__6->GetXaxis()->SetTitleFont(42);
   h__6->GetYaxis()->SetTitle("Trials");
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
   TText *pt_LaTex = pt->AddText("#LT#delta'#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta'} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("1.692
#pm0.003
");
   pt_LaTex = pt->AddText("0.08
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
