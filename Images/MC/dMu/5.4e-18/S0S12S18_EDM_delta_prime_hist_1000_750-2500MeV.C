void S0S12S18_EDM_delta_prime_hist_1000_750-2500MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:25:53 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__5 = new TH1D("h__5","",60,1.041355,2.245538);
   h__5->SetBinContent(20,2);
   h__5->SetBinContent(21,1);
   h__5->SetBinContent(22,3);
   h__5->SetBinContent(23,8);
   h__5->SetBinContent(24,16);
   h__5->SetBinContent(25,35);
   h__5->SetBinContent(26,44);
   h__5->SetBinContent(27,60);
   h__5->SetBinContent(28,75);
   h__5->SetBinContent(29,90);
   h__5->SetBinContent(30,102);
   h__5->SetBinContent(31,109);
   h__5->SetBinContent(32,121);
   h__5->SetBinContent(33,73);
   h__5->SetBinContent(34,83);
   h__5->SetBinContent(35,52);
   h__5->SetBinContent(36,37);
   h__5->SetBinContent(37,27);
   h__5->SetBinContent(38,28);
   h__5->SetBinContent(39,11);
   h__5->SetBinContent(40,10);
   h__5->SetBinContent(41,7);
   h__5->SetBinContent(42,2);
   h__5->SetBinContent(44,1);
   h__5->SetBinContent(46,1);
   h__5->SetBinContent(47,1);
   h__5->SetBinContent(48,1);
   h__5->SetEntries(1000);
   h__5->SetStats(0);
   h__5->SetLineWidth(3);
   h__5->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__5->GetXaxis()->CenterTitle(true);
   h__5->GetXaxis()->SetLabelFont(42);
   h__5->GetXaxis()->SetTitleSize(0.04);
   h__5->GetXaxis()->SetTitleOffset(1.1);
   h__5->GetXaxis()->SetTitleFont(42);
   h__5->GetYaxis()->SetTitle("Trials");
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
   TText *pt_LaTex = pt->AddText("#LT#delta'#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta'} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("1.657
#pm0.002
");
   pt_LaTex = pt->AddText("0.078
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
