void Y_40()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:28 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_40__83 = new TH1F("Y_40__83","Plane 40",100,-100,100);
   Y_40__83->SetBinContent(36,1);
   Y_40__83->SetBinContent(41,6);
   Y_40__83->SetBinContent(42,11);
   Y_40__83->SetBinContent(43,34);
   Y_40__83->SetBinContent(44,19);
   Y_40__83->SetBinContent(45,15);
   Y_40__83->SetBinContent(46,16);
   Y_40__83->SetBinContent(47,15);
   Y_40__83->SetBinContent(48,11);
   Y_40__83->SetBinContent(49,33);
   Y_40__83->SetBinContent(50,78);
   Y_40__83->SetBinContent(51,45);
   Y_40__83->SetBinContent(52,11);
   Y_40__83->SetBinContent(53,13);
   Y_40__83->SetBinContent(54,11);
   Y_40__83->SetBinContent(55,15);
   Y_40__83->SetBinContent(56,15);
   Y_40__83->SetBinContent(57,18);
   Y_40__83->SetBinContent(58,25);
   Y_40__83->SetBinContent(59,31);
   Y_40__83->SetBinContent(62,1);
   Y_40__83->SetBinContent(70,1);
   Y_40__83->SetEntries(425);
   Y_40__83->SetLineWidth(3);
   Y_40__83->GetXaxis()->SetTitle("Y [mm]");
   Y_40__83->GetXaxis()->CenterTitle(true);
   Y_40__83->GetXaxis()->SetLabelFont(42);
   Y_40__83->GetXaxis()->SetTitleSize(0.04);
   Y_40__83->GetXaxis()->SetTitleOffset(1.1);
   Y_40__83->GetXaxis()->SetTitleFont(42);
   Y_40__83->GetYaxis()->SetTitle("Ghost tracks");
   Y_40__83->GetYaxis()->CenterTitle(true);
   Y_40__83->GetYaxis()->SetNdivisions(4000510);
   Y_40__83->GetYaxis()->SetLabelFont(42);
   Y_40__83->GetYaxis()->SetTitleSize(0.04);
   Y_40__83->GetYaxis()->SetTitleOffset(1.1);
   Y_40__83->GetYaxis()->SetTitleFont(42);
   Y_40__83->GetZaxis()->SetLabelFont(42);
   Y_40__83->GetZaxis()->SetTitleOffset(1);
   Y_40__83->GetZaxis()->SetTitleFont(42);
   Y_40__83->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
