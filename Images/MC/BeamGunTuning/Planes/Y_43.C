void Y_43()
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
   
   TH1F *Y_43__89 = new TH1F("Y_43__89","Plane 43",100,-100,100);
   Y_43__89->SetBinContent(33,1);
   Y_43__89->SetBinContent(41,7);
   Y_43__89->SetBinContent(42,7);
   Y_43__89->SetBinContent(43,40);
   Y_43__89->SetBinContent(44,18);
   Y_43__89->SetBinContent(45,13);
   Y_43__89->SetBinContent(46,16);
   Y_43__89->SetBinContent(47,13);
   Y_43__89->SetBinContent(48,11);
   Y_43__89->SetBinContent(49,32);
   Y_43__89->SetBinContent(50,76);
   Y_43__89->SetBinContent(51,49);
   Y_43__89->SetBinContent(52,14);
   Y_43__89->SetBinContent(53,8);
   Y_43__89->SetBinContent(54,15);
   Y_43__89->SetBinContent(55,13);
   Y_43__89->SetBinContent(56,15);
   Y_43__89->SetBinContent(57,19);
   Y_43__89->SetBinContent(58,28);
   Y_43__89->SetBinContent(59,28);
   Y_43__89->SetBinContent(70,1);
   Y_43__89->SetEntries(424);
   Y_43__89->SetLineWidth(3);
   Y_43__89->GetXaxis()->SetTitle("Y [mm]");
   Y_43__89->GetXaxis()->CenterTitle(true);
   Y_43__89->GetXaxis()->SetLabelFont(42);
   Y_43__89->GetXaxis()->SetTitleSize(0.04);
   Y_43__89->GetXaxis()->SetTitleOffset(1.1);
   Y_43__89->GetXaxis()->SetTitleFont(42);
   Y_43__89->GetYaxis()->SetTitle("Ghost tracks");
   Y_43__89->GetYaxis()->CenterTitle(true);
   Y_43__89->GetYaxis()->SetNdivisions(4000510);
   Y_43__89->GetYaxis()->SetLabelFont(42);
   Y_43__89->GetYaxis()->SetTitleSize(0.04);
   Y_43__89->GetYaxis()->SetTitleOffset(1.1);
   Y_43__89->GetYaxis()->SetTitleFont(42);
   Y_43__89->GetZaxis()->SetLabelFont(42);
   Y_43__89->GetZaxis()->SetTitleOffset(1);
   Y_43__89->GetZaxis()->SetTitleFont(42);
   Y_43__89->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
