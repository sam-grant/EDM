void S18_EDM_delta_prime_hist_1000_750-2750MeV_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:47:57 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__45 = new TH1D("h__45","",59,1.100307,2.284067);
   h__45->SetBinContent(22,2);
   h__45->SetBinContent(23,4);
   h__45->SetBinContent(24,13);
   h__45->SetBinContent(25,28);
   h__45->SetBinContent(26,47);
   h__45->SetBinContent(27,78);
   h__45->SetBinContent(28,115);
   h__45->SetBinContent(29,132);
   h__45->SetBinContent(30,141);
   h__45->SetBinContent(31,153);
   h__45->SetBinContent(32,95);
   h__45->SetBinContent(33,72);
   h__45->SetBinContent(34,53);
   h__45->SetBinContent(35,36);
   h__45->SetBinContent(36,19);
   h__45->SetBinContent(37,6);
   h__45->SetBinContent(38,2);
   h__45->SetBinContent(39,1);
   h__45->SetBinContent(40,1);
   h__45->SetBinContent(41,1);
   h__45->SetBinContent(43,1);
   h__45->SetEntries(1000);
   h__45->SetStats(0);
   h__45->SetLineWidth(3);
   h__45->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__45->GetXaxis()->CenterTitle(true);
   h__45->GetXaxis()->SetLabelFont(42);
   h__45->GetXaxis()->SetTitleSize(0.04);
   h__45->GetXaxis()->SetTitleOffset(1.1);
   h__45->GetXaxis()->SetTitleFont(42);
   h__45->GetYaxis()->SetTitle("Trials");
   h__45->GetYaxis()->CenterTitle(true);
   h__45->GetYaxis()->SetNdivisions(4000510);
   h__45->GetYaxis()->SetLabelFont(42);
   h__45->GetYaxis()->SetTitleSize(0.04);
   h__45->GetYaxis()->SetTitleOffset(1.1);
   h__45->GetYaxis()->SetTitleFont(42);
   h__45->GetZaxis()->SetLabelFont(42);
   h__45->GetZaxis()->SetTitleOffset(1);
   h__45->GetZaxis()->SetTitleFont(42);
   h__45->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.695
#pm0.002
");
   pt_LaTex = pt->AddText("0.057
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
