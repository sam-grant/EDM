void S12_EDM_delta_prime_hist_1000_1000-2500MeV_trackReco_WORLD_250MeV_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 17:21:16 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__6 = new TH1D("h__6","",54,1.094953,2.194565);
   h__6->SetBinContent(15,2);
   h__6->SetBinContent(16,6);
   h__6->SetBinContent(17,6);
   h__6->SetBinContent(18,9);
   h__6->SetBinContent(19,22);
   h__6->SetBinContent(20,34);
   h__6->SetBinContent(21,44);
   h__6->SetBinContent(22,45);
   h__6->SetBinContent(23,69);
   h__6->SetBinContent(24,65);
   h__6->SetBinContent(25,77);
   h__6->SetBinContent(26,83);
   h__6->SetBinContent(27,96);
   h__6->SetBinContent(28,78);
   h__6->SetBinContent(29,65);
   h__6->SetBinContent(30,62);
   h__6->SetBinContent(31,51);
   h__6->SetBinContent(32,46);
   h__6->SetBinContent(33,37);
   h__6->SetBinContent(34,25);
   h__6->SetBinContent(35,24);
   h__6->SetBinContent(36,21);
   h__6->SetBinContent(37,12);
   h__6->SetBinContent(38,7);
   h__6->SetBinContent(39,6);
   h__6->SetBinContent(40,1);
   h__6->SetBinContent(41,2);
   h__6->SetBinContent(42,2);
   h__6->SetBinContent(43,2);
   h__6->SetBinContent(46,1);
   h__6->SetEntries(1000);
   h__6->SetStats(0);
   h__6->SetLineWidth(3);
   h__6->GetXaxis()->SetTitle("#delta [mrad]");
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
   TText *pt_LaTex = pt->AddText("#LT#delta#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("1.638
#pm0.003
");
   pt_LaTex = pt->AddText("0.099
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
