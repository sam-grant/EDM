void S12_EDM_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:45:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__58 = new TH1D("h__58","",61,1.080613,2.305004);
   h__58->SetBinContent(20,1);
   h__58->SetBinContent(21,1);
   h__58->SetBinContent(22,3);
   h__58->SetBinContent(23,6);
   h__58->SetBinContent(24,8);
   h__58->SetBinContent(25,25);
   h__58->SetBinContent(26,37);
   h__58->SetBinContent(27,46);
   h__58->SetBinContent(28,65);
   h__58->SetBinContent(29,85);
   h__58->SetBinContent(30,89);
   h__58->SetBinContent(31,96);
   h__58->SetBinContent(32,111);
   h__58->SetBinContent(33,98);
   h__58->SetBinContent(34,82);
   h__58->SetBinContent(35,71);
   h__58->SetBinContent(36,47);
   h__58->SetBinContent(37,38);
   h__58->SetBinContent(38,31);
   h__58->SetBinContent(39,25);
   h__58->SetBinContent(40,13);
   h__58->SetBinContent(41,9);
   h__58->SetBinContent(42,7);
   h__58->SetBinContent(43,1);
   h__58->SetBinContent(44,1);
   h__58->SetBinContent(46,1);
   h__58->SetBinContent(47,1);
   h__58->SetBinContent(48,1);
   h__58->SetBinContent(49,1);
   h__58->SetEntries(1000);
   h__58->SetStats(0);
   h__58->SetLineWidth(3);
   h__58->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__58->GetXaxis()->CenterTitle(true);
   h__58->GetXaxis()->SetLabelFont(42);
   h__58->GetXaxis()->SetTitleSize(0.04);
   h__58->GetXaxis()->SetTitleOffset(1.1);
   h__58->GetXaxis()->SetTitleFont(42);
   h__58->GetYaxis()->SetTitle("Trials");
   h__58->GetYaxis()->CenterTitle(true);
   h__58->GetYaxis()->SetNdivisions(4000510);
   h__58->GetYaxis()->SetLabelFont(42);
   h__58->GetYaxis()->SetTitleSize(0.04);
   h__58->GetYaxis()->SetTitleOffset(1.1);
   h__58->GetYaxis()->SetTitleFont(42);
   h__58->GetZaxis()->SetLabelFont(42);
   h__58->GetZaxis()->SetTitleOffset(1);
   h__58->GetZaxis()->SetTitleFont(42);
   h__58->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.712
#pm0.003
");
   pt_LaTex = pt->AddText("0.081
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
