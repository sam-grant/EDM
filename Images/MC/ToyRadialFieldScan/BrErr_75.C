void BrErr_75()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:38:49 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__8 = new TH1D("__8","Number of sub-runs: 75",2000,0,1);
   __8->SetBinContent(718,1);
   __8->SetBinContent(719,1);
   __8->SetBinContent(720,1);
   __8->SetBinContent(721,2);
   __8->SetBinContent(722,1);
   __8->SetBinContent(723,1);
   __8->SetBinContent(724,2);
   __8->SetBinContent(725,5);
   __8->SetBinContent(726,5);
   __8->SetBinContent(727,7);
   __8->SetBinContent(728,17);
   __8->SetBinContent(729,17);
   __8->SetBinContent(730,13);
   __8->SetBinContent(731,20);
   __8->SetBinContent(732,28);
   __8->SetBinContent(733,35);
   __8->SetBinContent(734,35);
   __8->SetBinContent(735,27);
   __8->SetBinContent(736,35);
   __8->SetBinContent(737,43);
   __8->SetBinContent(738,42);
   __8->SetBinContent(739,48);
   __8->SetBinContent(740,49);
   __8->SetBinContent(741,51);
   __8->SetBinContent(742,48);
   __8->SetBinContent(743,46);
   __8->SetBinContent(744,47);
   __8->SetBinContent(745,59);
   __8->SetBinContent(746,38);
   __8->SetBinContent(747,32);
   __8->SetBinContent(748,29);
   __8->SetBinContent(749,23);
   __8->SetBinContent(750,21);
   __8->SetBinContent(751,22);
   __8->SetBinContent(752,24);
   __8->SetBinContent(753,16);
   __8->SetBinContent(754,27);
   __8->SetBinContent(755,23);
   __8->SetBinContent(756,13);
   __8->SetBinContent(757,12);
   __8->SetBinContent(758,9);
   __8->SetBinContent(759,6);
   __8->SetBinContent(760,6);
   __8->SetBinContent(761,2);
   __8->SetBinContent(762,2);
   __8->SetBinContent(763,2);
   __8->SetBinContent(764,1);
   __8->SetBinContent(765,1);
   __8->SetBinContent(766,2);
   __8->SetBinContent(767,3);
   __8->SetEntries(1000);
   __8->SetStats(0);
   __8->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __8->GetXaxis()->SetRange(643,842);
   __8->GetXaxis()->CenterTitle(true);
   __8->GetXaxis()->SetLabelFont(42);
   __8->GetXaxis()->SetTitleSize(0.04);
   __8->GetXaxis()->SetTitleOffset(1.1);
   __8->GetXaxis()->SetTitleFont(42);
   __8->GetYaxis()->SetTitle("Trials");
   __8->GetYaxis()->CenterTitle(true);
   __8->GetYaxis()->SetNdivisions(4000510);
   __8->GetYaxis()->SetLabelFont(42);
   __8->GetYaxis()->SetTitleSize(0.04);
   __8->GetYaxis()->SetTitleOffset(1.1);
   __8->GetYaxis()->SetTitleFont(42);
   __8->GetZaxis()->SetLabelFont(42);
   __8->GetZaxis()->SetTitleOffset(1);
   __8->GetZaxis()->SetTitleFont(42);
   __8->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("Trials");
   pt_LaTex = pt->AddText("Mean [ppm]");
   pt_LaTex = pt->AddText("RMS [ppm]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("1000");
   pt_LaTex = pt->AddText("0.4
#pm0.0001
");
   pt_LaTex = pt->AddText("0.00415
#pm9e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
