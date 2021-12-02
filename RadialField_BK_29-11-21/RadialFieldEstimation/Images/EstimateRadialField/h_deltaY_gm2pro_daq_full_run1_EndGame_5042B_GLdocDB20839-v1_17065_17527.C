void h_deltaY_gm2pro_daq_full_run1_EndGame_5042B_GLdocDB20839-v1_17065_17527()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 05:28:52 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *hist__2 = new TH1D("hist__2","",100,0.8,1.8);
   hist__2->SetBinContent(63,1);
   hist__2->SetBinContent(64,3);
   hist__2->SetBinContent(65,2);
   hist__2->SetBinContent(66,2);
   hist__2->SetBinContent(67,3);
   hist__2->SetBinContent(68,2);
   hist__2->SetBinContent(69,2);
   hist__2->SetBinContent(70,2);
   hist__2->SetBinContent(71,6);
   hist__2->SetBinContent(72,1);
   hist__2->SetBinContent(73,3);
   hist__2->SetBinContent(74,5);
   hist__2->SetBinContent(75,5);
   hist__2->SetBinContent(76,8);
   hist__2->SetBinContent(77,9);
   hist__2->SetBinContent(78,5);
   hist__2->SetBinContent(79,9);
   hist__2->SetBinContent(80,3);
   hist__2->SetBinContent(81,6);
   hist__2->SetBinContent(82,9);
   hist__2->SetBinContent(83,8);
   hist__2->SetBinContent(84,9);
   hist__2->SetBinContent(85,2);
   hist__2->SetBinContent(86,7);
   hist__2->SetBinContent(87,3);
   hist__2->SetBinContent(88,3);
   hist__2->SetBinContent(89,2);
   hist__2->SetBinContent(90,7);
   hist__2->SetBinContent(91,2);
   hist__2->SetBinContent(92,3);
   hist__2->SetBinContent(93,10);
   hist__2->SetBinContent(94,7);
   hist__2->SetBinContent(95,10);
   hist__2->SetBinContent(96,10);
   hist__2->SetBinContent(97,6);
   hist__2->SetBinContent(98,8);
   hist__2->SetBinContent(99,5);
   hist__2->SetBinContent(100,5);
   hist__2->SetBinContent(101,72);
   hist__2->SetEntries(265);
   hist__2->SetStats(0);
   hist__2->SetFillColor(1);
   hist__2->SetFillStyle(3001);
   hist__2->GetXaxis()->SetTitle("#Delta#LTy_{calo}#GT [mm]");
   hist__2->GetXaxis()->CenterTitle(true);
   hist__2->GetXaxis()->SetLabelFont(42);
   hist__2->GetXaxis()->SetLabelSize(0.035);
   hist__2->GetXaxis()->SetTitleOffset(1.1);
   hist__2->GetXaxis()->SetTitleFont(42);
   hist__2->GetYaxis()->SetTitle("Runs / 0.01 mm");
   hist__2->GetYaxis()->CenterTitle(true);
   hist__2->GetYaxis()->SetNdivisions(4000510);
   hist__2->GetYaxis()->SetLabelFont(42);
   hist__2->GetYaxis()->SetLabelSize(0.035);
   hist__2->GetYaxis()->SetTitleOffset(1.1);
   hist__2->GetYaxis()->SetTitleFont(42);
   hist__2->GetZaxis()->SetLabelFont(42);
   hist__2->GetZaxis()->SetLabelSize(0.035);
   hist__2->GetZaxis()->SetTitleSize(0.035);
   hist__2->GetZaxis()->SetTitleFont(42);
   hist__2->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(20);
   TText *pt_LaTex = pt->AddText("1.64
#pm0.007
");
   pt_LaTex = pt->AddText("0.0988
#pm0.005
");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(20);
   pt_LaTex = pt->AddText("#LT#Deltay#GT [mm]");
   pt_LaTex = pt->AddText("#sigma [mm]");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
