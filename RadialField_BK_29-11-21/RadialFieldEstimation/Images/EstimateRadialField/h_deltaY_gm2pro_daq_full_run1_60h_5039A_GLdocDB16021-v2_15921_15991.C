void h_deltaY_gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2_15921_15991()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 13 02:54:10 2022) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *hist__2 = new TH1D("hist__2","",100,0.8,1.8);
   hist__2->SetBinContent(19,1);
   hist__2->SetBinContent(20,2);
   hist__2->SetBinContent(21,2);
   hist__2->SetBinContent(22,2);
   hist__2->SetBinContent(23,5);
   hist__2->SetBinContent(24,4);
   hist__2->SetBinContent(25,4);
   hist__2->SetBinContent(27,1);
   hist__2->SetBinContent(28,3);
   hist__2->SetBinContent(29,1);
   hist__2->SetBinContent(30,1);
   hist__2->SetBinContent(31,1);
   hist__2->SetBinContent(33,2);
   hist__2->SetBinContent(34,1);
   hist__2->SetBinContent(35,2);
   hist__2->SetBinContent(36,4);
   hist__2->SetBinContent(37,5);
   hist__2->SetBinContent(38,3);
   hist__2->SetBinContent(40,1);
   hist__2->SetBinContent(41,1);
   hist__2->SetBinContent(42,2);
   hist__2->SetBinContent(43,1);
   hist__2->SetBinContent(48,4);
   hist__2->SetBinContent(49,2);
   hist__2->SetBinContent(50,2);
   hist__2->SetBinContent(52,2);
   hist__2->SetBinContent(54,2);
   hist__2->SetEntries(61);
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
   TText *pt_LaTex = pt->AddText("1.14
#pm0.01
");
   pt_LaTex = pt->AddText("0.103
#pm0.009
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
