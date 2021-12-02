void h_deltaY_gm2pro_daq_full_run1_9d_5040A_GLdocDB17018-v3_16355_16514()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 05:28:35 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *hist__2 = new TH1D("hist__2","",100,0.8,1.8);
   hist__2->SetBinContent(47,3);
   hist__2->SetBinContent(48,2);
   hist__2->SetBinContent(49,2);
   hist__2->SetBinContent(51,4);
   hist__2->SetBinContent(52,4);
   hist__2->SetBinContent(53,6);
   hist__2->SetBinContent(54,2);
   hist__2->SetBinContent(55,5);
   hist__2->SetBinContent(56,10);
   hist__2->SetBinContent(57,6);
   hist__2->SetBinContent(58,11);
   hist__2->SetBinContent(59,14);
   hist__2->SetBinContent(60,12);
   hist__2->SetBinContent(61,10);
   hist__2->SetBinContent(62,6);
   hist__2->SetBinContent(63,2);
   hist__2->SetBinContent(65,1);
   hist__2->SetBinContent(66,1);
   hist__2->SetBinContent(67,3);
   hist__2->SetBinContent(69,1);
   hist__2->SetBinContent(70,1);
   hist__2->SetBinContent(72,1);
   hist__2->SetEntries(107);
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
   TText *pt_LaTex = pt->AddText("1.37
#pm0.005
");
   pt_LaTex = pt->AddText("0.048
#pm0.003
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
